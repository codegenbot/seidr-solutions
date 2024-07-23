```
def solve_boolean(expression):
    def recursive_eval(tokens):
        and_result = True
        or_result = False

        for token in tokens:
            if token == 'T':
                and_result = or_result = True
            elif token == 'F':
                and_result = or_result = False
            elif token == '&':
                and_result = and_result and (next_token == 'T')
            elif token == '|':
                next_token = next(tokens)
                if next_token in ['&', '|']:
                    return or_result
                and_result = or_result = next_token == 'T'
        return or_result

    tokens = expression.replace('&', ' & ').replace('|', ' | ')
    return recursive_eval(tokens.split())