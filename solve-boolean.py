```
def solve_boolean(expression):
    # Use a stack to evaluate the expression
    stack = []
    precedence = {'|': 1, '&': 2}
    for char in expression:
        if char == 'T':
            stack.append(True)
        elif char == 'F':
            stack.append(False)
        elif char in precedence:
            # Evaluate the operator with higher precedence
            op = stack.pop()
            while len(stack) > 0 and precedence[op] <= precedence[stack[-1]]:
                a = stack.pop()
                b = stack.pop()
                stack.append(a or b)
            stack.append(op)
        else:
            # Evaluate the next operator
            op = stack.pop()
            if op == '|':
                a = stack.pop()
                b = stack.pop()
                stack.append(a or b)
            elif op == '&':
                a = stack.pop()
                b = stack.pop()
                stack.append(a and b)
    return stack[-1]
```