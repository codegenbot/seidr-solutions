def solve_boolean(expression):
    operators = {
        '|' : lambda x, y: x or y,
        '&' : lambda x, y: x and y
    }

    stack = []
    for char in expression:
        if char == 'T':
            stack.append(True)
        elif char == 'F':
            stack.append(False)
        elif char in operators:
            operator = operators[char]
            right = stack.pop()
            left = stack.pop()
            stack.append(operator(left, right))
    
    return stack[0]