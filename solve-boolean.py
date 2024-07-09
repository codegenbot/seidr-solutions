def solve_boolean(expression):
    if "&" not in expression and "|" not in expression:
        return "T" == expression[0].upper()
    for char in ["&", "|"]:
        if char not in expression:
            continue
        start = 0
        end = len(expression) - 1
        while end > start and expression[end] != char:
            end -= 1
        expression = expression[:start+1] + " (" + expression[start+2:end] + ") )"
    if "&" in expression and "&" not in expression[1:-1]:
        return solve_boolean(expression.replace("&", " &("))
    elif "|" in expression and "|" not in expression[1:-1]:
        return solve_boolean(expression.replace("|", " |("))
    else:
        left = solve_boolean(expression[:expression.index(")")])
        right = solve_boolean(expression[expression.index("(")+1:expression.rindex(")")])
        if "&" in expression:
            return left and right
        else:
            return left or right