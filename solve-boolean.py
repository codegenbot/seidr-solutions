def solve_boolean(expression):
    stack = []
    for char in expression:
        if char == "|":
            operand1 = stack.pop()
            operand2 = stack.pop()
            result = operand1 or operand2
            stack.append(result)
        elif char == "&":
            operand1 = stack.pop()
            operand2 = stack.pop()
            result = operand1 and operand2
            stack.append(result)
        else:
            stack.append(char == "t")
    return stack.pop()


# Read input
expression = input().strip()

# Evaluate Boolean expression
result = solve_boolean(expression)

# Print output
print(result)