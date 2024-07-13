```
def solve_boolean(expression):
    stack = []
    result = True
    for char in expression:
        if char == 'T':
            stack.append(True)
        elif char == 'F':
            stack.append(False)
        elif char in '&|':
            operator = '&' if char == '&' else '|'
            while len(stack) >= 2 and (stack[-1] != operator or (operator == '|' and stack[-2])):
                right = stack.pop()
                left = stack.pop()
                stack.append(left if operator == '&' else right)
            if char == '&':
                result &= stack.pop()
            else:
                result |= stack.pop()
    return result