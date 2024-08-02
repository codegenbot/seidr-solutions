```
def solve_boolean(expression):
    def bool_eval(expr):
        if expr == 'T':
            return True
        elif expr == 'F':
            return False
        elif '&' in expr:
            a, b = expr.split('&')
            return bool_eval(a) and bool_eval(b)
        else:
            return '|'.index(expr[0]) > 1

    return bool_eval(expression)