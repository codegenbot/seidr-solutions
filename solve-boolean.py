def solve_boolean(expression):
    def eval_expr(tokenized):
        if len(tokenized) == 1:  
            return tokenized[0] == 'T'
        elif '&' in tokenized: 
            idx = tokenized.index('&')
            left = tokenized[:idx].split('|')
            right = tokenized[idx+1:].split('|')
            return eval_expr([x for x in left if eval_expr([x])]) and eval_expr(right)
        else:
            idx = tokenized.index('|')  
            left = tokenized[:idx].split('&')
            right = tokenized[idx+1:].split('&')
            return eval_expr(left) or eval_expr([x for x in right if eval_expr([x])])

    tokens = expression.replace('&', ' and ').replace('|', ' or ')
    return eval_expr(tokens.split())