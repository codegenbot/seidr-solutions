def solve_boolean(expression):
    operators = {
        '|' : lambda x, y: x or y,
        '&' : lambda x, y: x and y,
        '!' : lambda x: not x
    }

    stack = []
    for char in expression:
        if char in ('t', 'f'):
            stack.append('T' if char == 't' else 'F')
        elif char == '!':
            operator = operators[char]
            operand = stack.pop()
            stack.append(operator(operand))
        elif char in operators:
            operator = operators[char]
            right = stack.pop()
            left = stack.pop()
            stack.append(operator(left, right))
    
    return stack[0] == 'T'

# Example usage:
print(solve_boolean("t&f&t"))