```
def solve_boolean(expression):
    def eval_expr(tokenized):
        if len(tokenized) == 1:  
            return tokenized[0] == 'T'
        elif '&' in tokenized:
            left, right = tokenized.split('&')
            return all(eval_expr([x]) for x in left.split('|')) and all(eval_expr([x]) for x in right.split('|'))
        else:
            left, right = tokenized.split('|')
            return any(eval_expr([x]) for x in left.split('&')) or any(eval_expr([x]) for x in right.split('&'))

    tokens = expression.replace(' & ', ' &').replace(' | ', ' |')
    return eval_expr(tokens.split())