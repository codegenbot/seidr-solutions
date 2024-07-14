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

    if "(" in expression and ")" in expression:
        if expression[1] == "T" and expression[-2] == ")":
            return True
        elif expression[1] == "F" and expression[-2] == ")":
            return False

    if "&" in expression:
        left, right = expression.split(" & ")
        return solve_boolean(left, depth + 1) and solve_boolean(right, depth + 1)

    elif "|" in expression:
        left, right = expression.split(" | ")
        return solve_boolean(left, depth + 1) or solve_boolean(right, depth + 1)