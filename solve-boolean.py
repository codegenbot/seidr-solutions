def solve_boolean(expression):
    stack = []
    for char in expression:
        if char == '&':
            stack.append('(')
        elif char == '|':
            stack.pop()
    return expression[0] == 'T'