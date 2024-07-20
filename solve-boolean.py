```
def solve_boolean(expression):
    stack = []
    operator_stack = []
    op = ''
    for char in expression:
        if char in ['T', 'F']:
            stack.append(char)
        elif char == '(':
            operator_stack.append(char)
        elif char in ['|', '&']:
            while len(operator_stack) and operator_stack[-1] != '(':
                op = operator_stack.pop()
                if op in ['|', '&']:
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
                    a = stack.pop() == 'T'
                    b = stack.pop() == 'T'
                    if op == '&':
                        stack.append(a and b)
                    else:
                        stack.append(a or b)
            if len(operator_stack) > 0:
                operator_stack.pop()  # Discard the parenthesis

    while len(operator_stack):
        op = operator_stack.pop()
        if op == '&':
            stack.append(stack.pop() == 'T' and stack.pop() == 'T')
        elif op == '|':
            stack.append(stack.pop() == 'T' or stack.pop() == 'T')

    return stack[0] == 'T' if stack else None