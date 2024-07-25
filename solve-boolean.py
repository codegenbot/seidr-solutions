def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    elif "&" in expression:
        return all([eval(i) for i in expression.split("&")])
    elif "|" in expression:
        return any([eval(i) for i in expression.split("|")])