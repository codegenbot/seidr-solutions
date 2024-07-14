```
def solve_boolean(expression):
    def evaluate_expression(expression):
        if expression == 'T':
            return True
        elif expression == 'F':
            return False
        elif '&' in expression and '|' in expression:
            left, right = expression.split('&')
            left = left.strip()
            right = right.lstrip()
            return not (evaluate_expression(left) and evaluate_expression(right))
        elif '|' in expression:
            left, right = expression.split('|')
            left = left.strip()
            right = right.lstrip()
            return evaluate_expression(left) or evaluate_expression(right)
        elif '&' in expression:
            left, right = expression.split('&')
            left = left.strip()
            right = right.lstrip()
            return evaluate_expression(left) and evaluate_expression(right)

    return str(evaluate_expression(expression)).lower()