def solve_boolean(expression):
    expression = expression.replace(' | ', '|').replace('&', ' & ')
    def recursive_eval(tokens, i=None):
        if i == None:
            i = 0

        while i < len(tokens):
            token = tokens[i]
            if token == '(':
                return recursive_eval(tokens, i+1)
            elif token in ['T', 'F']:
                return True if token == 'T' else False
            elif token in ['|', '&']:
                left = recursive_eval(tokens, i+1)
                i += 2
                right = recursive_eval(tokens, i)
                if token == '|':
                    return left or right
                elif token == '&':
                    return left and right
            elif token == ')':
                while tokens[i] != '(':
                    i += 1
                i += 1

    return recursive_eval(expression.split())