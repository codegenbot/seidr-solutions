```
def solve_boolean(expression):
    ops = ['&', '|']
    stack = []
    result = True if expression[0] == 'T' else False

    for char in expression:
        if char in ops:
            stack.append(char)
        elif char != 'T' and char != 'F':
            raise ValueError("Invalid operation")
        elif not stack:
            op = op; val = (char == 'T'); if op == '&': result = result and val else: result = result or val
        else:
            op = op[0]; val = (char == 'T'); if op == '&': result = result and val else: result = result or val
            stack.pop()

    return result