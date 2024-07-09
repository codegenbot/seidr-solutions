```
def solve_boolean(expression):
    while "&(" in expression or "|(" in expression:
        if "&(" in expression:
            start = expression.index("&(")
            end = expression.index(")", len(start)+2) - 1
            expression = expression[:start] + str(solve_boolean(expression[start+2:end])) and solve_boolean(expression[end+1:])
        elif "|(" in expression:
            start = expression.index("|(")
            end = expression.index(")", len(start)+2) - 1
            expression = expression[:start] + str(solve_boolean(expression[start+2:end])) or solve_boolean(expression[end+1:])
    if "&" in expression and "&" not in expression[1:-1]:
        return "T" == expression[0].upper()
    elif "|" in expression and "|" not in expression[1:-1]:
        return "T" == expression[0].upper()
    else:
        left = solve_boolean(expression[:expression.index(")")]
        right = solve_boolean(expression[expression.index("(")+1:expression.rindex(")")])
        if "&" in expression:
            return left and right
        else:
            return left or right