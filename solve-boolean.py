def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise Exception("Invalid expression")
    elif "&" in expression:
        left, right = expression.split("&")
        return not (bool(left) and bool(right))
    elif "|" in expression:
        left, right = expression.split("|")
        return bool(left) or bool(right)