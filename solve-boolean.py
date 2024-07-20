```
def solve_boolean(expression):
    operators = {'&': lambda x, y: x and y, '|': lambda x, y: x or y}
    stack = []
    for char in expression:
        if char in ['T', 'F']:
            stack.append(char == 'T')
        elif char in operators:
            b = stack.pop()
            a = stack.pop()
            stack.append(operators[char](a, b))
    return stack[0]