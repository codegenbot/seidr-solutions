def solve_boolean(expression):
    def evaluate(op1, op2, op):
        if op == '&':
            return op1 and op2
        else:
            return op1 or op2
    stack = []
    for char in expression:
        if char in '&|':
            b = stack.pop()
            a = stack.pop()
            stack.append(evaluate(a, b, char))
        elif char == 'T':
            stack.append(True)
        else:
            stack.append(False)
    return stack[0]