```
def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    while "&" in expression or "|" in expression:
        if "&" in expression:
            a, b = expression.split("&")
            expression = str(solve_boolean(a)) and str(solve_boolean(b))
        elif "|" in expression:
            a, b = expression.split("|")
            expression = str(solve_boolean(a)) or str(solve_boolean(b))
    return eval(expression)