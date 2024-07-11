```
def solve_boolean(expression):
    def evaluate_expression(expression):
        while '|' in expression or '&' in expression:
            if '|' in expression:
                left, right = expression.split('|', 1)
                if '&' in left:
                    left = evaluate_expression(left)
                else:
                    left = not bool(left)
                if '&' in right:
                    right = evaluate_expression(right)
                else:
                    right = not bool(right)
                return left or right
            elif '&' in expression:
                left, right = expression.split('&', 1)
                if '&' in left:
                    left = evaluate_expression(left)
                else:
                    left = not bool(left)
                if '&' in right:
                    right = evaluate_expression(right)
                else:
                    right = not bool(right)
                return left and right
        return bool(expression) == 'T'

    return evaluate_expression(expression).replace('T', True).replace('F', False)