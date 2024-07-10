def solve_boolean(expression):
    if not expression:
        return False
    stack = []
    temp_stack = []
    for char in expression:
        if char.upper() == 'T':
            temp_stack.append(True)
        elif char.upper() == 'F':
            temp_stack.append(False)
        elif char == '(':
            stack.append(temp_stack[:])
            temp_stack = []
        elif char in '|&':
            while len(stack) and stack[-1] != '(':
                operand2 = temp_stack.pop()
                operand1 = stack.pop()
                if char == '&':
                    stack.append(operand1 and operand2)
                elif char == '|':
                    stack.append(operand1 or operand2)
            if char == '(':
                stack.pop()
        else:
            temp_stack = []
    return temp_stack[0]