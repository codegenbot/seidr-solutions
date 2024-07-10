```
def solve(input_str):
    def evaluate_bool_expr(expr):
        if expr == 'T':
            return True
        elif expr == 'F':
            return False
        elif '&' in expr:
            return all(evaluate_bool_expr(sub_expr) for sub_expr in expr.split('&'))
        elif '|' in expr:
            return any(evaluate_bool_expr(sub_expr) for sub_expr in expr.split('|'))
        else:
            return eval(expr)

    return str(evaluate_bool_expr(input_str)).lower()