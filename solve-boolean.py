```
def solve_boolean(boolean_expression):
    def evaluate(expression):
        stack = []
        for char in expression[::-1]:
            if char in 'TF':
                stack.append(char == 'T')
            elif char == '|':
                a = stack.pop()
                b = stack.pop()
                stack.append(a or b)
            elif char == '&':
                a = stack.pop()
                b = stack.pop()
                stack.append(a and b)
        return stack[0]

    return evaluate(boolean_expression)