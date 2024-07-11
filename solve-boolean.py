```
def solve_boolean(expression):
    stack = [None]
    for char in expression:
        if char.upper() == 'T':
            stack.append(True)
        elif char.upper() == 'F':
            stack.append(False)
        else:
            operand2 = stack.pop()
            if operand2 is None:
                return False
            operand1 = stack.pop()
            if operand1 is None:
                return False
            if char == '&':
                stack.append(operand1 and operand2)
            elif char == '|':
                stack.append(operand1 or operand2)

    return stack[0]