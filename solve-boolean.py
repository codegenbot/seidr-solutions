def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression:
        a, b = expression.split("&")
        return bool(eval(a) and eval(b))
    elif "|" in expression:
        a, b = expression.split("|")
        return bool(eval(a) or eval(b))