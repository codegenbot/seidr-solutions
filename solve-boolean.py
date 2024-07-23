def solve_boolean(expression):
    def eval_expr(tokenized):
        if not tokenized:
            return False
        token = tokenized.pop(0)
        if token in ['T', 'F']:
            return token == 'T'
        elif token == '&':
            return eval_expr(tokenized) and eval_expr(tokenized)
        else: 
            return eval_expr(tokenized) or eval_expr(tokenized)

    tokens = list(expression.replace('&', ' &').replace('|', ' |').split())
    while '&' in tokens:
        start = tokens.index('&')
        end = start + 1
        while end < len(tokens) and tokens[end] != '&':
            end += 1
        tokens = tokens[:start] + ['&'] + tokens[start+1:end]
    return eval_expr(list(tokens))