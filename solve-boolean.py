```
def solve_boolean(expression):
    def boolean_eval(expr):
        if expr == 'T':
            return True
        elif expr == 'F':
            return False
        elif '&' in expr:
            left, right = expr.split('&')
            return boolean_eval(left) and boolean_eval(right)
        else:
            left, right = expr.split('|')
            return boolean_eval(left) or boolean_eval(right)

    return boolean_eval(expression)