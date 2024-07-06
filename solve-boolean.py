```
def solve_boolean(expression):
    if "&" in expression or "|" in expression:
        left, right = expression.split("&")[0], expression.split("|")[0]
        return (solve_boolean(left) and solve_boolean(right)) if "&" in expression else (solve_boolean(left) or solve_boolean(right))
    elif expression == "T":
        return True
    elif expression == "F":
        return False