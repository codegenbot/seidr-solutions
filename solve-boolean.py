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
            while not operator_stack:
                op = operator_stack.pop()
                b = bool(stack.pop())
                a = bool(stack.pop())
                if op == '&':
                    stack.append(a and b)
                else:
                    stack.append(a or b)
            operator_stack.append(char)
        elif char == ')':
            while len(operator_stack) and operator_stack[-1] != '(':
                op = operator_stack.pop()
                b = bool(stack.pop())
                a = bool(stack.pop())
                if op == '&':
                    stack.append(a and b)
                else:
                    stack.append(a or b)
            operator_stack.pop()

    while len(operator_stack):
        op = operator_stack.pop()
        if op == '&':
            stack.append(bool(stack.pop()) and bool(stack.pop()))
        elif op == '|':
            stack.append(bool(stack.pop()) or bool(stack.pop()))

    return bool(stack[0])