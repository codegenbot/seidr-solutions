```
def solve.Boolean(expression):
    def evaluate(expression):
        stack = []
        for char in expression:
            if char in ['|', '&']:
                a = stack.pop()
                b = stack.pop()
                stack.append(a and b or a or b)
            elif char == 'T':
                stack.append(True)
            elif char == 'F':
                stack.append(False)
        return stack[0]

    return evaluate(expression).bool()