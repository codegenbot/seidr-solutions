```
def solve_boolean(expression):
    if expression == "t":
        return True
    elif expression == "f":
        return False
    elif "&" in expression:
        left, right = expression.split("&")
        return bool(int(solve_boolean(left))) and bool(int(solve_boolean(right)))
    elif "|" in expression:
        left, right = expression.split("|")
        return bool(int(solve_boolean(left))) or bool(int(solve_boolean(right)))