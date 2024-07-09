def solve_boolean(expression):
    def evaluate_expression(expression):
        if expression == 'T':
            return True
        elif expression == 'F':
            return False
        elif '&' in expression and '|' in expression:
            return evaluate_expression(expression.replace('&', 'and').replace('|', 'or'))
        else:
            left, operator, right = expression.split(operator)
            if operator == '&':
                return evaluate_expression(left) and evaluate_expression(right)
            else:
                return evaluate_expression(left) or evaluate_expression(right)

    return evaluate_expression(expression)