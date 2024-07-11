```
def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    else:
        left, right = expression.split("|")
        return solve_boolean(left) or solve_boolean(right)