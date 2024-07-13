def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression:
        left, right = expression.split("&")
        return bool(eval(left) and eval(right))
    elif "|" in expression:
        left, right = expression.split("|")
        return bool(eval(left) or eval(right))