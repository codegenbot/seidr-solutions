def solve_boolean(expression):
    if "T" == expression:
        return True
    elif "F" == expression:
        return False

    while "&" in expression and "|" in expression:
        expression = expression.replace("&|", "&&|").replace("|&", "|&&")

    if "(" in expression or ")" in expression:
        i = 0
        while i < len(expression):
            if expression[i] == "(":
                end = expression.index(")", i)
                result = solve_boolean(expression[i + 1 : end])
                expression = expression[:i] + str(result) + expression[end + 1 :]
                i = end
            else:
                i += 1

        while "&" in expression and "|" in expression:
            expression = expression.replace("&|", "&&|").replace("|&", "|&&")

    if "&" in expression:
        left, right = expression.split(" & ")
        return solve_boolean(left) and solve_boolean(right)

    elif "|" in expression:
        left, right = expression.split(" | ")
        return solve_boolean(left) or solve_boolean(right)