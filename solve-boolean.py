def solve_boolean(expression):
    def evaluate_expression(expression):
        if expression == "T":
            return "T"
        elif expression == "F":
            return "F"
        elif "&" in expression:
            left, right = expression.split("&")
            return ("T" if "T" in evaluate_expression(left) else "F") + (("T" if "T" in evaluate_expression(right) else "F") if eval("True and " + str(evaluate_expression(right)) ) else "")
        elif "|" in expression:
            left, right = expression.split("|")
            return ("T" if "T" in evaluate_expression(left) else "F") + (("T" if "T" in evaluate_expression(right) else "F") if eval("True or " + str(evaluate_expression(right)) ) else "")

    return evaluate_expression(expression)