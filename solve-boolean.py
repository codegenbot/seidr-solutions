```
def solve(input_str):
    def evaluate(expression):
        if expression == "T":
            return True
        elif expression == "F":
            return False
        elif "&" in expression:
            left, right = expression.split("&")
            return evaluate(left) and evaluate(right)
        else:
            left, right = expression.split("|")
            return evaluate(left) or evaluate(right)

    return bool(evaluate(input_str))