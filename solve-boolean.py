def solve_boolean(expression):
    def eval_expr(tokenized):
        if len(tokenized) == 1:  
            return tokenized[0] == 'T'
        for i in range(len(tokenized)):
            if tokenized[i] in {'&', '|'}:
                left = eval_expr(tokenized[:i])
                right = eval_expr(tokenized[i+1:])
                if tokenized[i] == '&':
                    return left and right
                else:
                    return left or right
        return eval_expr(tokenized).replace(' and ', '&').replace(' or ', '|')
    return eval_expr(expression.replace('&', ' and ').replace('|', ' or '))