```
def solve_boolean(expression):
    ops = ['&', '|']
    stack = []
    result = True if expression[-1] == 'T' else False
    expression = expression[::-1]

    for char in expression:
        if char in ops:
            while stack and stack[-1] in ops:
                op = stack.pop()
                if op == '&':
                    result = result and (char == 'T')
                elif op == '|':
                    result = result or (char == 'T')
            stack.append(char)
        elif char != 'T' and char != 'F':
            raise ValueError("Invalid operation")
    return result