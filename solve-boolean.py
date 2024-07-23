def solve_boolean(expression):
    def eval_expr(tokenized):
        if not tokenized:  
            return False  # empty expression is False
        if len(tokenized) == 1:  
            return tokenized[0] == 'T'
        elif '&' in tokenized:
            left = eval_expr([x for x in tokenized[:tokenized.index('&')] + ['&'] + [tokenized[tokenized.index('&')+1:]]])
            right = eval_expr([x for x in tokenized[tokenized.index('&')+1:] if eval_expr([x]) or [False]])
            return left and right
        else:
            left = eval_expr(tokenized[:tokenized.index('|') + 1])
            right = eval_expr(tokenized[tokenized.index('|')+1:])
            return left or right

    tokens = expression.replace('&', ' and ').replace('|', ' or ')
    return eval_expr(tokens.split())