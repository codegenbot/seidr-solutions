def solve_boolean(expression):
    def eval_expr(tokenized):
        if len(tokenized) == 1:  
            return tokenized[0] == 'T'
        elif '&' in tokenized:  
            idx = tokenized.index('&')
            return eval_expr(tokenized[:idx]) and eval_expr(tokenized[idx+1:])
        else:
            idx = tokenized.index('|')  
            return eval_expr(tokenized[:idx]) or eval_expr(tokenized[idx+1:])

    tokens = expression.replace('&', ' and ').replace('|', ' or ')
    return eval_expr(tokens.split())