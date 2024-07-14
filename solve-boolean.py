def solve_boolean(expression):
    if not expression:
        return None

    while "&" in expression or "|" in expression:
        i = expression.find("&")
        j = expression.find("|")
        if i == -1 and j == -1:
            break
        elif i != -1 and (j == -1 or i < j):
            i = j = -1
        expression = expression[:i] + str(expression[i] == "&" and (expression[i-1] == "T" and stack.pop()) or expression[i]) + expression[i+1:]
        if j != -1:
            expression = expression[:j] + str(expression[j] == "|" and (expression[j-1] == "T" and stack.pop()) or expression[j]) + expression[j+1:]

    return stack[0]