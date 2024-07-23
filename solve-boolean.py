def solve_boolean(expression):
    def recursive_eval(tokens):
        result = None
        for token in tokens:
            if token == 'T':
                if result is None: 
                    result = True
                elif result == True: 
                    result = True
                else:
                    return False
            elif token == 'F':
                if result is None:
                    result = False
                elif result == True:
                    return False
                else:
                    result = False
            elif token == '|':
                return True if result == False else recursive_eval(tokens[tokens.index(token)+1:])
            elif token == '&':
                return False if result == True else recursive_eval(tokens[tokens.index(token)+1:])

        return result

    expression = expression.replace(' | ', '|').replace('&', ' & ')
    return recursive_eval(expression.split())