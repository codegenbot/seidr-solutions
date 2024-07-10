def solve_boolean(expression):
    if expression[0].upper() != 'T':
        return False
    if len(expression) > 1:
        stack = []
    for char in expression[1:]:
        if char.upper() == 'T':
            stack.append(True)
        elif char.upper() == 'F':
            stack.append(False)
        else:
            operand2 = stack.pop()
            operand1 = stack.pop()
            if char == '&':
                stack.append(operand1 and operand2)
            elif char == '|':
                stack.append(operand1 or operand2)

    return stack[0]