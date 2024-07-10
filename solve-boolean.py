```
def solve_boolean(expression):
    while "&" in expression:
        left, right = expression.split("&")
        if left == "F":
            return False
        expression = right
    while "|" in expression:
        left, right = expression.split("|")
        if left == "F":
            return False
        expression = right
    if expression == "T":
        return True
    else:
        return False