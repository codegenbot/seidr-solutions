def solve_boolean(expression):
    stack = []
    operator_stack = []
    for char in expression:
        if char in ['T', 'F']:
            stack.append(char)
        elif char == '(':
            operator_stack.append(char)
        elif char in ['|', '&']:
            while (len(operator_stack) and operator_stack[-1] not in ['(', '|', '&']):
                op = operator_stack.pop()
                a = stack.pop() == 'T'
                b = stack.pop() == 'T'
                if op == '&':
                    stack.append(a and b)
                else:
                    stack.append(a or b)
            operator_stack.append(char)
        elif char == ')':
            while len(operator_stack) and operator_stack[-1] != '(':
                op = operator_stack.pop()
                if op in ['|', '&']:
                    break
            operator_stack.pop()  # Discard the parenthesis

    while len(operator_stack):
        op = operator_stack.pop()
        a = stack.pop() == 'T'
        b = stack.pop() == 'T'
        if op == '&':
            stack.append(a and b)
        elif op == '|':
            stack.append(a or b)

    return stack[0] == 'T' if stack else None