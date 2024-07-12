def solve_boolean(expression):
    stack = []
    for char in expression:
        if char == "T":
            stack.append(True)
        elif char == "F":
            stack.append(False)
        elif char == "&":
            if len(stack) < 2:
                return "Invalid expression"
            op1 = stack.pop()
            op2 = stack.pop()
            stack.append(op1 and op2)
        elif char == "|":
            if len(stack) < 2:
                return "Invalid expression"
            op1 = stack.pop()
            op2 = stack.pop()
            stack.append(op1 or op2)
    return stack[0]


expression = input().strip()
print(solve_boolean(expression))