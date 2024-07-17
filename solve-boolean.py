def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    elif "&" in expression:
        left, right = expression.split("&")
        return not (bool(left), bool(right))[0]
    elif "|" in expression:
        left, right = expression.split("|")
        return bool(left) or bool(right)