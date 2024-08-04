def solve_boolean(expression):
    stack = []
    for char in expression:
        if char == "t":
            stack.append(True)
        elif char == "f":
            stack.append(False)
        elif char == "&":
            operand1 = stack.pop()
            operand2 = stack.pop()
            stack.append(operand1 and operand2)
        elif char == "|":
            operand1 = stack.pop()
            operand2 = stack.pop()
            stack.append(operand1 or operand2)
    return stack.pop()


# Read input from user
expression = input().strip()
result = solve_boolean(expression)
print(result)