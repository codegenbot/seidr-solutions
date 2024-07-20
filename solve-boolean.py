def solve_boolean(expression):
    stack = []
    operator_stack = []
    for char in expression:
        if char in ['T', 'F']:
            stack.append(char)
        elif char in ['|', '&']:
            while len(operator_stack) and (operator_stack[-1] == '&' or (char == '|' and operator_stack[-1] == '|')):
                a = stack.pop() == 'T'
                b = stack.pop() == 'T'
                if operator_stack[-1] == '&':
                    stack.append(a and b)
                else:
                    stack.append(a or b)
                operator_stack.pop()
            operator_stack.append(char)
        evaluate_expression = False
    while len(operator_stack):
        a = stack.pop() == 'T'
        b = stack.pop() == 'T'
        if operator_stack[-1] == '&':
            stack.append(a and b)
        else:
            stack.append(a or b)
        operator_stack.pop()
    if len(operator_stack):
        a = stack.pop() == 'T'
        b = stack.pop() == 'T'
        if operator_stack[-1] == '&':
            return a and b
        else:
            return a or b
    return stack[0] == 'T' if stack else None