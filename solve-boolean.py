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
        result = eval(expression[start+1:end])
        expression = expression[:start] + str(result) + expression[end+1:]
    if '&' in expression and '|' in expression:
        left, right = expression.split('&')
        return bool(eval(left)) and solve_boolean(right.strip())
    elif '&' in expression:
        return all(bool(eval(arg)) for arg in expression.split('&'))
    else:
        return any(bool(eval(arg)) for arg in expression.split('|'))