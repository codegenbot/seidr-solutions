Here is the solution:

def solve_boolean(expression):
    result = True
    for char in expression:
        if char == 'F':
            result = False
        elif char == '|':
            break
    return result