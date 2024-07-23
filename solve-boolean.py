def solve_boolean(expression):
    def recursive_eval(tokens, i=None):
        result = None
        stack = []

        while i < len(tokens):
            token = tokens[i]
            if token == '(':
                stack.append(i)
            elif token in ['T', 'F']:
                if result is None: 
                    result = True if token == 'T' else False
                elif result == True: 
                    result = True
                else:
                    result = False
                return result
            elif token in ['|', '&']:
                operator = token
                if stack and tokens[stack[-1]] != '(':
                    while len(stack) > 0 and tokens[stack[-1]] == operator:
                        if operator == '&':
                            if result is False:
                                return False
                        else:  
                            if result is True:
                                return True
                        stack.pop()
                i += 1
            elif token == ')':
                while tokens[i] != '(':
                    i += 1
                i += 1

        if len(stack) > 0:
            return recursive_eval(tokens, stack[-1]+1)

    expression = expression.replace(' | ', '|').replace('&', ' & ')
    return recursive_eval(expression.split())