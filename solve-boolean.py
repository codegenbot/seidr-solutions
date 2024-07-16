def solve_boolean(expression):
    def eval_expression(expression):
        if operator in ["|", "&"]:
            left = eval_expression(expression[:expression.index(operator)])
            right = eval_expression(expression[expression.index(operator)+1:])
            return "T" if (left and right) if operator == '&' else (left or right) else "F"
        else:
            return "T" if expression.upper() == 'T' else "F"

    return eval_expression(expression)