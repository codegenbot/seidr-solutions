def solve_boolean(expression):
    def recursive_eval(tokens):
        and_result = True
        or_result = True

        for token in tokens:
            if token == 'T':
                and_result = or_result = True
            elif token == 'F':
                and_result = False
            elif token == '|':
                and_result, or_result = True, True
            elif token == '&':
                return and_result
        return or_result

    tokens = expression.replace('&', ' & ').replace('|', ' | ')
    return recursive_eval(tokens.split())