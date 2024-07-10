```
def solve_boolean(expression):
    if not expression:
        return False

    stack = []
    is_operand = True
    for char in expression:
        if char == 't':
            stack.append(True)
            is_operand = True
        elif char == 'f':
            stack.append(False)
            is_operand = True
        else:
            if char == '&':
                operand2 = stack.pop()
                operator = lambda x, y: x and y
            elif char == '|':
                operand2 = stack.pop()
                operator = lambda x, y: x or y
            else:  # assume this is '('
                continue

            while not is_operand or len(stack) == 0:
                operand1 = stack.pop()
                is_operand = False

            if char == '&':
                stack.append(operator(operand1, operand2))
            elif char == '|':
                stack.append(operator(operand1, operand2))

    return stack[0]