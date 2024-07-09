def solve_boolean(expression):
    while "&" in expression or "|" in expression:
        if "&" not in expression:
            expression = expression.replace("|", " |(")
        elif "|" not in expression:
            expression = expression.replace("&", " &(")
        else:
            start = 0
            for i, char in enumerate(expression):
                if char == "&":
                    start = i
                    break
            end = len(expression) - 1
            while end > start and expression[end] != "&":
                end -= 1
            expression = expression[:start+1] + " & (" + expression[start+2:end] + ") )"
            expression = expression.replace("|", " |(", 1)
    return eval(expression)