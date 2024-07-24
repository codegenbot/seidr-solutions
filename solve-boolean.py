def solve_boolean(expression):
    stack = []

    for char in expression:
        if char == "T":
            stack.append(True)
        elif char == "F":
            stack.append(False)
        elif char == "|":
            operand2 = stack.pop()
            operand1 = stack.pop()
            stack.append(operand1 or operand2)
        elif char == "&":
            operand2 = stack.pop()
            operand1 = stack.pop()
            stack.append(operand1 and operand2)

    return stack.pop()


input_expression = input()
print(solve_boolean(input_expression))