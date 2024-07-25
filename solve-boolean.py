```
def solve_boolean(expression):
    def evaluate_subexpression(subexpr):
        if 'T' in subexpr or 't' in subexpr:
            return True
        elif 'F' in subexpr or 'f' in subexpr:
            return False
        elif '&' in subexpr:
            left, right = subexpr.split('&')
            return evaluate_subexpression(left) and evaluate_subexpression(right)
        else:
            left, right = subexpr.split('|')
            return evaluate_subexpression(left) or evaluate_subexpression(right)

    return evaluate_subexpression(expression)