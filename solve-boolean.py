Here is the Python solution for the problem:

def solve_boolean(expression):
    stack = []
    result = False
    operators = {'|': lambda x, y: x or y, '&': lambda x, y: x and y}

    for char in expression:
        if char == 'T':
            stack.append(True)
        elif char == 'F':
            stack.append(False)

        elif char in operators:
            operand2 = stack.pop()
            operand1 = stack.pop()
            result = operators[char](operand1, operand2)

    return result