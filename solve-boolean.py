def solve_boolean(expression):
    operators = {
        '|' : lambda x, y: x or y,
        '&' : lambda x, y: x and y
    }

    stack = []
    for char in expression:
        if char in ('T', 'F', 't', 'f'):
            stack.append(char.lower() == 't')
        elif char in operators:
            operator = operators[char]
            right = stack.pop()
            left = stack.pop()
            stack.append(operator(left, right))
    
    return stack[0]