```
def solve_boolean(expression):
    def recursive_eval(tokens):
        result = None
        operators = []
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
            elif token in ['|', '&']:
                while operators and operators[-1] != '(':
                    if operators[-1] == '|':
                        return True if result == False else recursive_eval(tokens[tokens.index(token):])
                    elif operators[-1] == '&':
                        return False if result == True else recursive_eval(tokens[tokens.index(token):])
                    operators.pop()
                if token == '(':
                    operators.append(token)
                else:
                    operators.append(token)
            elif token == ')':
                while operators and operators[-1] != '(':
                    if operators[-1] == '|':
                        return True if result == False else recursive_eval(tokens[tokens.index(token):])
                    elif operators[-1] == '&':
                        return False if result == True else recursive_eval(tokens[tokens.index(token):])
                    operators.pop()
                operators.pop()

        while operators:
            if operators[-1] == '|':
                return True if result == False else recursive_eval(list(operators))
            elif operators[-1] == '&':
                return False if result == True else recursive_eval(list(operators))
            operators.pop()
        return result

    expression = expression.replace(' | ', '|').replace('&', ' & ')
    return recursive_eval(expression.split())