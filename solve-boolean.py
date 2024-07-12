def solve_boolean(expression):
    stack = []
    for char in expression:
        if char == 'F':
            stack.append(False)
        elif char == 'T':
            stack.append(True)
        elif char == '|':
            operand1 = stack.pop()
            operand2 = stack.pop()
            stack.append(operand1 or operand2)
        elif char == '&':
            operand1 = stack.pop()
            operand2 = stack.pop()
            stack.append(operand1 and operand2)
    return stack[0]

input_str = input()
print(solve_boolean(input_str))