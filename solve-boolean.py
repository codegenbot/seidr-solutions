def solveBoolean(expression):
    def evaluate(expression):
        stack = []
        for char in reversed(expression):
            if char == '|':
                a = stack.pop()
                b = stack.pop()
                stack.append(a or b)
            elif char == '&':
                a = stack.pop()
                b = stack.pop()
                stack.append(a and b)
            else:
                stack.append(char == 'T')
        return stack[0]

    return evaluate(expression)