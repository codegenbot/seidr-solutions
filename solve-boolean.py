```
def solve_boolean(expression):
    while "&" in expression:
        left, right = expression.split("&", 1)
        expression = str(bool(solve_boolean(left))) & right
    while "|" in expression:
        left, right = expression.split("|", 1)
        expression = str(bool(solve_boolean(left))) or right
    if expression == "T":
        return True
    elif expression == "F":
        return False