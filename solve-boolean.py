def solve_boolean(expression):
    bool_map = {'T': True, 'F': False}

    def eval_expression(expr):
        if expr not in bool_map:  
            return eval.BooleanToBooleanValue(expr)

        while '&' in expr:
            and_parts = expr.split('&')
            result = all(eval_expression(part) for part in and_parts)
            return 'T' if result else 'F'
        
        while '|' in expr:
            or_parts = expr.split('|')
            result = any(eval_expression(part) for part in or_parts)
            return 'T' if result else 'F'
        
        return bool_map[expr]

    def BooleanToBooleanValue(s):
        if s == 'T':
            return True
        elif s == 'F':
            return False

    return eval.BooleanToBooleanValue(expression)