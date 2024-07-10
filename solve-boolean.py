```
def solve_boolean(expression):
    stack = []
    operator_stack = []

    for char in expression:
        if char in ['T', 'F']:
            stack.append(char == 'T')
        elif char in ['|', '&']:
            while operator_stack and operator_stack[-1] != ((char == '|') ^ (operator_stack[-1] == '&')):
                b2, b1 = stack.pop(), stack.pop()
                if char == '|':
                    stack.append(b1 or b2)
                else:
                    stack.append(b1 and b2)
            operator_stack.append(char)
        elif char == ')':
            while operator_stack[-1] != '(':
                b2, b1 = stack.pop(), stack.pop()
                if operator_stack[-1] == '|':
                    stack.append(b1 or b2)
                else:
                    stack.append(b1 and b2)
            operator_stack.pop()

    while operator_stack:
        b2, b1 = stack.pop(), stack.pop()
        if operator_stack[-1] == '|':
            stack.append(b1 or b2)
        else:
            stack.append(b1 and b2)
        operator_stack.pop()

    return stack[0]