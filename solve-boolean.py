```
def solve.Boolean(expression):
    def evaluate(expression):
        stack = []
        for char in expression[::-1]:
            if char in {'|', '&'}:
                b2 = stack.pop()
                b1 = stack.pop()
                if char == '|':
                    stack.append(b1 or b2)
                else:
                    stack.append(b1 and b2)
            elif char in {'T', 't', 'F', 'f'}:
                stack.append(char == 'T' or char == 't')
        return stack[0]
    return str(evaluate(expression)).lower()