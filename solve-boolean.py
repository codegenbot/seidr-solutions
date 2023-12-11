def solve_boolean(expression):
    operators = {'|', '&'}
    values = {'T': True, 'F': False}
    stack = []
    for char in expression:
        if char in values:
            stack.append(values[char])
        elif char in operators:
            operand2 = stack.pop()
            operand1 = stack.pop()
            if char == '|':
                result = operand1 or operand2
            else:
                result = operand1 and operand2
            stack.append(result)
    return stack[-1]