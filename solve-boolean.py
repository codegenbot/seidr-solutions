```
def solve_boolean(expression):
    stack = [None]
    for char in expression:
        if char.upper() == 'T':
            stack.append(True)
        elif char.upper() == 'F':
            stack.append(False)
        else:
            if len(stack) < 3:
                return False
            operand2 = stack.pop()
            operand1 = stack.pop()
            if char == '&':
                stack.append(operand1 and operand2)
            elif char == '|':
                stack.append(operand1 or operand2)

    return stack[0]