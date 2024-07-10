```
def solve_boolean(expression):
    if expression == "t":
        return True
    elif expression == "f":
        return False
    elif "&" in expression:
        left, right = expression.split("&")
        return solve_boolean(left) and solve_boolean(right)
    elif "|":
        left = expression[:expression.index("|")]
        right = expression[expression.index("|")+1:]
        return solve_boolean(left) or solve_boolean(right)