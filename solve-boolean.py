```
def solve_boolean(expression):
    ops = ['&', '|']
    stack = []
    result = True if expression[0] == 'T' else False
    expression = expression[::-1]

    for char in expression:
        if char not in ops and char != 'T' and char != 'F':
            raise ValueError("Invalid operation")
        elif char != 'T' and char != 'F':
            op = stack.pop()
            if op == '&':
                result = result and (char == 'T')
            elif op == '|':
                result = result or (char == 'T')
        else:
            stack.append(char)

    return result