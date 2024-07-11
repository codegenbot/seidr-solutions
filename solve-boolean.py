```
def solve_boolean(expression):
    while "|" in expression or "&" in expression:
        if "&" in expression:
            left, right = expression.split("&", 1)
            expression = "&&".join(map(solve_boolean, [left, right]))
        else:
            left, right = expression.split("|", 1)
            expression = "|".join(map(solve_boolean, [left, right]))

    if expression == "T":
        return True
    elif expression == "F":
        return False