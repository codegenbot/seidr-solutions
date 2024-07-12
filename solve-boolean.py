def solve_boolean(expression):
    stack = []
    for char in expression:
        if char == "T":
            stack.append(True)
        elif char == "F":
            stack.append(False)
        elif char == "&":
            if len(stack) >= 2:
                op1 = stack.pop()
                op2 = stack.pop()
                stack.append(op1 and op2)
            else:
                return "Invalid expression"
        elif char == "|":
            if len(stack) >= 2:
                op1 = stack.pop()
                op2 = stack.pop()
                stack.append(op1 or op2)
            else:
                return "Invalid expression"
    if len(stack) == 1:
        return stack[0]
    return "Invalid expression"

expression = input().strip()
print(solve_boolean(expression))