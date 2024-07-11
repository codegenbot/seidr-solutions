def solve_boolean(expression):
    def evaluate_expression(expression):
        if expression == "T":
            return True
        elif expression == "F":
            return False
        if not expression:
            return None  # Return None for empty input string

        if expression[0] in "&|":
            operator = expression[0]
            right = expression[1:]
            if operator == "&":
                return evaluate_expression(right) and True
            elif operator == "|":
                return evaluate_expression(right) or True

        if "&" in expression:
            left, right = expression.split("&")
            return evaluate_expression(left) and evaluate_expression(right)
        elif "|" in expression:
            left, right = expression.split("|")
            return evaluate_expression(left) or evaluate_expression(right)

    return evaluate_expression(expression)