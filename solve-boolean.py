def solve_boolean(expression):
    if "T" == expression:
        return True
    elif "F" == expression:
        return False

    while "&| |&|" in expression:
        expression = expression.replace("&|", "&&").replace("|&", "| ")

    i = 0
    while i < len(expression):
        if expression[i] == '(' or expression[i] == ')':
            j = i
            while expression[j] != ')':
                j += 1
            temp = expression[:i+1]
            new_expression = solve_boolean(expression[i+2:j])
            expression = temp + str(new_expression) + expression[j:]
            i = 0
        else:
            i += 1

    if "&" in expression:
        left, right = expression.split(" & ")
        return solve_boolean(left) and solve_boolean(right)

    elif "|" in expression:
        left, right = expression.split(" | ")
        return solve_boolean(left) or solve_boolean(right)