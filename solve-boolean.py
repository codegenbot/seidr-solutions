def solve_boolean(expression):
    def evaluate_expression(expression):
        if expression == "T":
            return "T"
        elif expression == "F":
            return "F"
        elif "&" in expression:
            left, right = expression.split("&")
            return (
                evaluate_expression(left) == "T" and evaluate_expression(right) == "T"
            ) or (
                evaluate_expression(left) == "F" and evaluate_expression(right) == "F"
            )
        elif "|" in expression:
            left, right = expression.split("|")
            return (
                (evaluate_expression(left) == "T" and evaluate_expression(right) == "T")
                or (
                    evaluate_expression(left) == "T"
                    and evaluate_expression(right) == "F"
                )
                or (
                    evaluate_expression(left) == "F"
                    and evaluate_expression(right) == "T"
                )
            )

    return evaluate_expression(expression)