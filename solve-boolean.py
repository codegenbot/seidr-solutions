def solve_boolean(expression):
    bool_map = {'T': True, 'F': False}

    def eval_expression(expr):
        if expr not in bool_map:  
            return bool_map[expr]
        
        if '&' in expr:
            parts = expr.split('&')
            return 'T' if all(eval_expression(part) for part in parts) else 'F'
        
        if '|' in expr:
            parts = expr.split('|')
            return 'T' if any(eval_expression(part) for part in parts) else 'F'
        
        return expr

    return eval_expression(expression) == 'T'