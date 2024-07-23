def solve_boolean(expression):
    tokens = expression.replace('&', ' and ').replace('|', ' or ')
    def evaluate_expression(tokens):
        stack = []
        operators = {'and': lambda a, b: a and b, 'or': lambda a, b: a or b}
        for token in tokens.split():
            if token in operators:
                right = stack.pop()
                left = stack.pop()
                stack.append(operators[token](left, right))
            elif token == 'T':
                stack.append(True)
            elif token == 'F':
                stack.append(False)
        return stack[0]