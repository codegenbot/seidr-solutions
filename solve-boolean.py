```Python
def solve_boolean(expression):
    while '&' in expression and '|' in expression:
        expression = expression.replace('&|', '&&|').replace('|&', '|&&')

    if expression == 'T':
        return True
    elif expression == 'F':
        return False

    if ' | ' in expression:
        left, right = expression.split(' | ')
        return solve_boolean(left) or solve_boolean(right)

    stack = []
    for char in expression:
        if char == '(':
            stack.append(char)
        elif char == ')':
            while stack and stack.pop() != '(':
                pass
        elif char in ['&', '|']:
            while stack:
                if stack[-1] in ['&', '|'] and not any(x in expression for x in ['(', ')']):
                    return False
                break

    if '&' in expression:
        left, right = expression.split(' & ')
        return solve_boolean(left) and solve_boolean(right)
    else:
        left, right = expression.split(' | ')
        return solve_boolean(left) or solve_boolean(right)