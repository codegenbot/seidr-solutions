```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression or '|' in expression:
        i = expression.find('(')
        while ')' in expression[i+1:]:
            i = expression[i+1:].find(')')
            j = i + 1
            expression = expression[:i] + solve_boolean(expression[i+1:j]) + expression[j+1:]
        return (solve_boolean(expression[:i]) and solve_boolean(expression[i+1:])) if expression[0] == '&' else (solve_boolean(expression[:i]) or solve_boolean(expression[i+1:]))
    return True