def solve_boolean(expression):
    if "(" in expression:
        end = expression.index(")")
        return solve_boolean("(" + expression[:end+1])

    while "&" in expression and "|" in expression:
        while "&" in expression:
            left, right = expression.split("&", 1)
            expression = str(eval(left)) + "&"
        while "|" in expression:
            left, right = expression.split("|", 1)
            expression = str(eval(left)) + "|"

    if "&" in expression or "|" in expression:
        left, right = expression.split("&")
        return eval("(" + str(solve_boolean(left)) + ") and (" + solve_boolean(right) + ")")

    if "|" in expression:
        left, right = expression.split("|")
        return eval("(" + str(solve_boolean(left)) + ") or (" + solve_boolean(right) + ")")

    if "T" in expression or "True" in expression:
        return True
    elif "F" in expression or "False" in expression:
        return False