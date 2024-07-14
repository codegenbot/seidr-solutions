def solve_boolean(expression):
    postfix = convert_to_postfix(expression)

    stack = []
    for char in postfix.split():
        if char.strip() in ['T', 'F']:
            stack.append(char == 'T')
        elif char:
            value2 = stack.pop()
            while len(stack) >= 1 and stack[-1]:
                value1 = stack.pop()
                if char == '&':
                    stack.append(value1 and value2)
                else: 
                    stack.append(value1 or value2)

    return stack[0]

def convert_to_postfix(expression):
    precedence = {'&': 1, '|': 0}
    output = []
    operator_stack = []

    for char in expression:
        if char.strip() in ['T', 'F']:
            output.append(char)
        elif char in ['&', '|']:
            while (len(operator_stack) >= 1 and operator_stack[-1] in precedence and precedence[operator_stack[-1]] >= precedence[char]):
                output.append(operator_stack.pop())
            operator_stack.append(char)

    # Empty the stack
    while len(operator_stack) > 0:
        output.append(operator_stack.pop())

    return ' '.join(output)