```
def solve_boolean(expression):
    stack = []
    operator_stack = []
    for char in expression:
        if char in ['T', 'F']:
            stack.append(char)
        elif char == '(':
            operator_stack.append(char)
        elif char in ['|', '&']:
            while len(operator_stack) and operator_stack[-1] != '(':
                op = operator_stack.pop()
                b = stack.pop() == 'T'
                a = stack.pop() == 'T'
                if op == '&':
                    stack.append(a and b)
                else:
                    stack.append(a or b)
            operator_stack.append(char)
        elif char == ')':
            while len(operator_stack) and operator_stack[-1] != '(':
                op = operator_stack.pop()
                if op in ['|', '&']:
                    stack.pop()  # Discard the expression inside parentheses
            operator_stack.pop()  # Discard the parenthesis

    while len(operator_stack):
        op = operator_stack.pop()
        if op == '&':
            b = stack.pop() == 'T'
            a = stack.pop() == 'T'
            stack.append(a and b)
        elif op == '|':
            b = stack.pop() == 'T'
            a = stack.pop() == 'T'
            stack.append(a or b)

    return stack[0] if stack else None