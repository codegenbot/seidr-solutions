def solve_boolean(expression):
    if not expression:
        return False

    stack = []
    operators = []

    for char in expression:
        if char.upper() == 'T':
            stack.append(True)
        elif char.upper() == 'F':
            stack.append(False)
        else:
            if char.upper() == '|':
                while operators and operators[-1].upper() == '&':
                    operand2 = stack.pop()
                    operand1 = stack.pop()
                    stack.append(operand1 and operand2)
                    operators.pop()
                operators.append(char)
            elif char.upper() == '&':
                operators.append(char)

    result = stack[0]
    while operators:
        operator = operators.pop()
        if operator.upper() == '|':
            result = stack.pop() or result
        else:
            result = stack.pop() and result

    return result