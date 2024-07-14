def solve_boolean(expression):
    if expression == "t":
        return True
    elif expression == "f":
        return False
    elif len(expression) > 1 and expression[0] == "(":
        expression = expression[1:-1]
        if "&" in expression:
            a, b = expression.split("&")
            return solve_boolean(a) and solve_boolean(b)
        elif "|" in expression:
            a, b = expression.split("|")
            return solve_boolean(a) or solve_boolean(b)
    else:
        if "&" in expression:
            a, b = expression.split("&")
            return bool(a) and bool(b)
        elif "|" in expression:
            a, b = expression.split("|")
            return bool(a) or bool(b)