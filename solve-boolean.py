def solve_boolean(expression):
    def eval_expr(tokenized):
        if len(tokenized) == 1:  
            return tokenized[0] == 'T'
        elif '&' in tokenized: 
            left = eval_expr([x for x in tokenized[:tokenized.index('&')] if eval_expr([x])])
            right = eval_expr([x for x in tokenized[tokenized.index('&')+1:] if eval_expr([x])])
            return left and right
        elif '|' in tokenized: 
            left = eval_expr([x for x in tokenized[:tokenized.index('|')] if eval_expr([x])])
            right = eval_expr([x for x in tokenized[tokenized.index('|')+1:] if eval_expr([x])])
            return left or right
        else:
            return tokenized[0] == 'T'

    tokens = expression.replace('&', ' and ').replace('|', ' or ')
    return eval_expr(tokens.split())