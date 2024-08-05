Here's the solution to the problem:

def solve_boolean(expression):
    stack = []
    for char in expression:
        if char == '&':
            second = stack.pop()
            first = stack.pop()
            stack.append(first and second)
        elif char == '|':
            second = stack.pop()
            first = stack.pop()
            stack.append(first or second)
        else:
            stack.append(char == 't')
    return stack[0]