```
def solve_boolean(expression):
    stack = []
    for char in expression:
        if char == 'T' or char == 'F':
            stack.append(char)
        elif char == '|':
            stack.pop() or= (stack.pop() == 'T')
        else:
            stack.pop() and= (stack.pop() == 'T')
    return stack[0] == 'T'