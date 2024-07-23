def solve_boolean(expression):
    tokens = expression.replace('&', ' and ').replace('|', ' or ')
    def evaluate_expression(tokens):
        stack = []
        for token in tokens.split():
            if token == 'and' or token == 'or':
                right = stack.pop()
                left = stack.pop()
                if token == 'and':
                    stack.append(left and right)
                elif token == 'or':
                    stack.append(left or right)
            else:
                stack.append(token == 'T')
        return stack[0]