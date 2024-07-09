```
def solve_boolean(expression):
    if expression == "T":
        expression = True
    elif expression == "F":
        expression = False
    elif "&" in expression:
        left, right = expression.split("&")
        return solve_boolean(left) and solve_boolean(right)
    elif "|" in expression:
        left, right = expression.split("|")
        return solve_boolean(left) or solve_boolean(right)
    else:
        return expression