```
def solve_boolean(expression):
    def eval_expr(tokenized):
        if len(tokenized) == 1:  
            return tokenized[0] == 'T'
        elif '&' in tokenized: 
            idx = tokenized.index('&')
            left = tokenized[:idx].split('|')
            right = tokenized[idx+1:].split('|')
            return all(eval_expr([x]) for x in left) and all(eval_expr([x]) for x in right)
        else:
            idx = tokenized.index('|')  
            left = tokenized[:idx].split('&')
            right = tokenized[idx+1:].split('&')
            return any(eval_expr([x]) for x in left) or any(eval_expr([x]) for x in right)

    tokens = expression.replace('&', ' and ').replace('|', ' or ')
    return eval_expr(tokens.split())