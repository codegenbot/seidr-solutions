def solve_boolean(expression):
    tokens = expression.replace('&', ' and ').replace('|', ' or ')
    def evaluate_expression(tokens):
        stack = []
        for token in tokens.split():
            if token == 'T':
                stack.append(True)
            elif token == 'F':
                stack.append(False)
            else:
                left = stack.pop()
                right = True if token == 'T' else False
                stack.append(left and right or left or right)
        return stack[0]