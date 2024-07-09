def solve_boolean(expression):
    while '(' in expression:
        start = 0
        end = 0
        for i, char in enumerate(expression):
            if char == '(':
                start = i
            elif char == ')':
                end = i
                break
        result = bool(eval(expression[start+1:end]))
        expression = expression[:start] + str(result) + expression[end+1:]
    return eval(expression)