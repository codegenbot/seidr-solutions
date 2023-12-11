```
def solve_boolean(expression):
    stack = []
    for char in expression:
        if char == 'T':
            stack.append(True)
        elif char == 'F':
            stack.append(False)
        elif char == '|':
            right = stack.pop()
            left = stack.pop()
            result = left or right
            stack.append(result)
        elif char == '&':
            right = stack.pop()
            left = stack.pop()
            result = left and right
            stack.append(result)
    return stack[-1]
```