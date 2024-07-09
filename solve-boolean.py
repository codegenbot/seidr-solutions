```Python
def solveBoolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    stack = []
    for char in expression:
        if char in ['|', '&']:
            right = stack.pop()
            left = stack.pop()
            if '&' in [left, right]:
                stack.append('&' + left + '&' + right)
            else:
                stack.append('|' + left + '|' + right)
        else:
            stack.append(char)
    return eval(''.join(stack))