def solve_boolean(expression):
    def recursive_eval(tokens):
        result = None
        for token in tokens:
            if token == 'T':
                if result is None:
                    result = True
                elif result:
                    result = True
                else:
                    result = False
            elif token == 'F':
                if result is None:
                    result = False
                elif result:
                    result = False
                else:
                    result = True
            elif token == '&':
                return recursive_eval(tokens[1:]) and result
            elif token == '|':
                return recursive_eval(tokens[1:]) or result

        return result

    expression = expression.replace(' | ', ' & ').replace('&', ' & ')
    return recursive_eval(expression.split())