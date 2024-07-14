def solve_boolean(expression, depth=0):
    if "T" == expression:
        return True
    elif "F" == expression:
        return False

    while "&" in expression and "|" in expression:
        expression = expression.replace("&|", "&&|").replace("|&", "|&&")

    if "(" in expression and ")" in expression:
        start = 0
        for i in range(len(expression)):
            if expression[i] == "(":
                start = i
            elif expression[i] == ")":
                end = i
                break
        return (solve_boolean(expression[1:start], depth + 1) 
                and solve_boolean(expression[start+1:end], depth + 1))

    if "&" in expression:
        left, right = expression.split(" & ")
        return solve_boolean(left, depth + 1) and solve_boolean(right, depth + 1)

    elif "|" in expression:
        left, right = expression.split(" | ")
        return solve_boolean(left, depth + 1) or solve_boolean(right, depth + 1)