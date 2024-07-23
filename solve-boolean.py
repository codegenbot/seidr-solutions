def solve_boolean(expression):
    def recursive_eval(tokens):
        result = True
        for token in tokens:
            if token == 'T':
                continue
            elif token == 'F':
                result = False
                break
            elif token == '|':
                return True
        return result

    expression = expression.replace(' | ', '&|').replace('&', ' & ')
    return recursive_eval(expression.split())