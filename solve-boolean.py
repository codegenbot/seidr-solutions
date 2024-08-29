def solve_boolean(expression):
    if expression.startswith("(") and expression.endswith(")"):
        return eval(f"({expression})")
    if "&" in expression:
        a, b = expression.split("&")
        return not (solve_boolean(a) and solve_boolean(b))
    elif "|" in expression:
        a, b = expression.split("|")
        return solve_boolean(a) or solve_boolean(b)
    elif expression == "T":
        return True
    elif expression == "F":
        return False