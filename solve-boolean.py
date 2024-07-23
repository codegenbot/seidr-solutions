def solve_boolean(expression):
    tokens = expression.split()
    def evaluate_expression(tokens):
        result = True
        for token in tokens:
            if token == 'F':
                return False
            elif token == 'T':
                continue
            elif '&' in token:
                result &= token[2:] == 'T'
            elif '|' in token:
                result |= token[1:] == 'T'
        return result
    result = True
    current_expression = ''
    for token in tokens:
        if token.startswith('& ') or token.startswith('| '):
            result = evaluate_expression(token.split(' '))
        else:
            current_expression += token + ' '
    return result