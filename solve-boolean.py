def solve_boolean(expression):
    postfix = convert_to_postfix(expression)

    stack = []
    for char in postfix.split():
        if char.strip() in ['T', 'F']:
            stack.append(char == 'T')
        elif char in ['&', '|']:
            value2 = stack.pop()
            value1 = stack.pop() if stack else True
            result = value1 and value2 if char == '&' else value1 or value2
            stack.append(result)
        # Ignore parentheses, they are handled when converting to postfix

    return stack[0]

def convert_to_postfix(expression):
    precedence = {'&': 1, '|': 0}
    output = []
    operator_stack = []

    for char in expression:
        if char.strip() in ['T', 'F']:
            output.append(char)
        elif char in ['&', '|']:
            while len(operator_stack) >= 1 and (operator_stack[-1] in precedence and precedence[operator_stack[-1]] >= precedence[char]):
                output.append(operator_stack.pop())
            operator_stack.append(char)
        elif char == '(':
            operator_stack.append('(')
        elif char == ')':
            while len(operator_stack) >= 1 and operator_stack[-1] != '(':
                output.append(operator_stack.pop())
            if operator_stack[-1] == '(':
                operator_stack.pop()

    while len(operator_stack) > 0:
        output.append(operator_stack.pop())

    return ' '.join(output)