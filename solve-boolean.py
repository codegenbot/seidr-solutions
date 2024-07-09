def solve_boolean(expression):
    stack = []
    for char in expression:
        if char == 'T':
            stack.append(True)
        elif char == 'F':
            stack.append(False)
        elif char == '|':
            while len(stack) > 0 and not isinstance(stack[-1], bool):
                stack.pop()
            operator_value = stack.pop()
            result = operator_value or stack.pop()
            stack.append(result)
        elif char == '&':
            while len(stack) > 0 and not isinstance(stack[-1], bool):
                stack.pop()
            operator_value = stack.pop()
            result = operator_value and stack.pop()
            stack.append(result)
    return stack[0]