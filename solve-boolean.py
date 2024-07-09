```
def solve_boolean(expression):
    if '(' in expression:
        start = 0
        for i, char in enumerate(expression):
            if char == '(':
                start = i
            elif char == ')':
                end = i
                break
        result = solve_boolean(expression[start+1:end])
        return eval(f'{expression[:start]}{str(result)}{expression[end+1:]}')
    if '&' in expression and '|' in expression:
        left, right = expression.split('&')
        return bool(eval(left)) and solve_boolean(right)
    elif '&' in expression:
        left, right = expression.split('&')
        return bool(eval(left)) and solve_boolean(right)
    elif '|' in expression:
        return any(solve_boolean(arg) for arg in expression.split('|'))
    else:
        return eval(expression.replace('t', 'True').replace('f', 'False'))