def solve_boolean(expression, depth=0):
    if "T" == expression:
        return True
    elif "F" == expression:
        return False

    if "&" in expression and "|" in expression:
        raise ValueError(
            "Invalid input. Boolean operators && and || must be separated by a space"
        )

    while "&" in expression and "|" in expression:
        expression = expression.replace("&|", "&&|").replace("|&", "|&&")

    if "(" in expression or ")" in expression:
        if "(" not in expression and ")" not in expression:
            return True
        left, right = expression.split(" ")
        if left == "(F":
            return False if right == "T" else solve_boolean(right[0:-1], depth + 1)
        elif left == "(T":
            return True if right == "T" else solve_boolean(right[0:-1], depth + 1)
        else:
            return solve_boolean(left, depth + 1) and solve_boolean(right, depth + 1)

    if "&" in expression:
        left, right = expression.split(" & ")
        return solve_boolean(left, depth + 1) and solve_boolean(right, depth + 1)

    elif "|" in expression:
        left, right = expression.split(" | ")
        return solve_boolean(left, depth + 1) or solve_boolean(right, depth + 1)