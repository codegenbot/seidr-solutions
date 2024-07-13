def solve_boolean(s):
    def evaluate(expression):
        if expression == "T":
            return True
        elif expression == "F":
            return False
        elif "&" in expression:
            a, b = expression.split("&")
            return evaluate(a) and evaluate(b)
        else:
            a, b = expression.split("|")
            return evaluate(a) or evaluate(b)

    return evaluate(s)