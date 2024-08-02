def solve_boolean(expression):
    if expression == "t":
        return True
    elif expression == "f":
        return False
    elif "&" in expression and "|" in expression:
        raise Exception("Invalid expression")
    elif "&" in expression:
        left, right = expression.split("&")
        return not bool(solve_boolean(left)) or bool(solve_boolean(right))
    elif "|" in expression:
        left, right = expression.split("|")
        return bool(solve_boolean(left)) or bool(solve_boolean(right))