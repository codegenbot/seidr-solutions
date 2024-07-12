def solve_boolean(expression):
    operators = {'T': True, 'F': False, '|': lambda x, y: x or y, '&': lambda x, y: x and y}
    for key, value in operators.items():
        if isinstance(value, bool):
            expression = expression.replace(key, str(value))
    stack = []
    for char in expression:
        if char in ['T', 'F']:
            stack.append(char == 'T')
        elif char in ['|', '&']:
            op2 = stack.pop()
            op1 = stack.pop()
            if char == '|':
                result = operators['|'](op1, op2)
            else:
                result = operators['&'](op1, op2)
            stack.append(result)
    return stack.pop()

input_str = input().strip()
print(solve_boolean(input_str))