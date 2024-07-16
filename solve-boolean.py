def solve_boolean(expression):
    def evaluate_token(token):
        if token == 't':
            return True
        elif token == 'f':
            return False

    tokens = expression.split('&')
    result = evaluate_token(tokens[0])
    
    for token in tokens[1:]:
        operator = '|'
        if token.startswith('|'):
            operator = '|'
            token = token[1:]
        elif token.endswith('&'):
            operator = '&'
            token = token[:-1]
        
        if operator == '|':
            result = result or evaluate_token(token)
        else:
            result = result and evaluate_token(token)

    return str(result)