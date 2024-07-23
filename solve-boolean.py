```
def solve_boolean(expression):
    def eval_expr(tokenized):
        if len(tokenized) == 1:  
            return tokenized[0] == 'T'
        elif '&' in tokenized and '|' in tokenized:
            left = eval_expr([x for x in tokenized[:tokenized.index('&')] if eval_expr([x])])
            right = eval_expr([x for x in tokenized[tokenized.index('&')+1:tokenized.index('|')] if eval_expr([x])])
            return left and eval_expr([x for x in tokenized[tokenized.index('|')+1:] if eval_expr([x])])
        elif '&' in tokenized:
            left = eval_expr([x for x in tokenized[:tokenized.index('&')] if eval_expr([x])])
            right = eval_expr([x for x in tokenized[tokenized.index('&')+1:] if eval_expr([x])])
            return left and right
        else:
            left = eval_expr([x for x in tokenized[:tokenized.index('|')] if eval_expr([x])])
            right = eval_expr([x for x in tokenized[tokenized.index('|')+1:] if eval_expr([x])])
            return left or right

    tokens = (' & '.join(expression.split()) + ' & ').split(' | ')
    return eval_expr(tokens)