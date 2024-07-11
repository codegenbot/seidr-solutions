```
def solve_boolean(expression):
    def evaluate_expression(expression):
        if expression == "T":
            return "T"
        elif expression == "F":
            return "F"
        elif "&" in expression:
            left, right = expression.split("&")
            return "(" + str(evaluate_expression(left)) + " & " + str(evaluate_expression(right)) + ")"
        elif "|" in expression:
            left, right = expression.split("|")
            return "(" + str(evaluate_expression(left)) + " | " + str(evaluate_expression(right)) + ")"

    return evaluate_expression(expression)