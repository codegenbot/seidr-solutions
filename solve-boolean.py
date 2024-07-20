```
def solve_boolean(expression):
    stack = []
    for c in expression:
        if c.isalpha():
            stack.append(c == 'T')
        elif c in ['&', '|']:
            operand2 = stack.pop()
            operand1 = stack.pop()
            if c == '&':
                stack.append(operand1 and operand2)
            else:
                stack.append(operand1 or operand2)
    return stack[0]