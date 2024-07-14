def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    elif "&" in expression:
        left, right = expression.split("&")
        return not bool(eval(left)) or not bool(eval(right))
    elif "|" in expression:
        left, right = expression.split("|")
        return bool(eval(left)) or bool(eval(right))