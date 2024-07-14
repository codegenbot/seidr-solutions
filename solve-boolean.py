def solve_boolean(expression):
    if "T" == expression:
        return True
    elif "F" == expression:
        return False

    while "&| |&|" in expression:
        expression = expression.replace("&|", "&&").replace("|&", "| ")

    if "&" in expression:
        left, right = expression.split(" & ")
        return solve_boolean(left) and solve_boolean(right)

    elif "|" in expression:
        left, right = expression.split(" | ")
        return solve_boolean(left) or solve_boolean(right)