def solve_boolean(expression):
    stack = []
    for char in expression:
        if char == 'T':
            stack.append(True)
        elif char == 'F':
            stack.append(False)
        elif char == '&':
            first, second = stack.pop() if stack else None, stack.pop() if stack else None
            stack.append(first and second) if first is not None and second is not None else False
        elif char == '|':
            first, second = stack.pop() if stack else None, stack.pop() if stack else None
            stack.append(first or second) if first is not None and second is not None else False
    return stack[-1]