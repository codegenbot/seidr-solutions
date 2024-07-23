def solve_boolean(expression):
    def recursive_eval(tokens, i=None):
        result = None
        if i == None:
            i = 0

        while i < len(tokens):
            token = tokens[i]
            if token == '(':
                i += 1
                result = recursive_eval(tokens, i)
                return result
            elif token in ['T', 'F']:
                if result is None: 
                    result = True if token == 'T' else False
                elif result == True: 
                    result = True
                else:
                    result = False
                return result
            elif token in ['|', '&']:
                left = recursive_eval(tokens, i) if result is None else result
                i += 1
                right = recursive_eval(tokens, i)
                return left and right if token == '&' else left or right
            elif token == ')':
                i += 1
                continue

    expression = expression.replace(' | ', '|').replace('&', ' & ')
    return recursive_eval(expression.split())