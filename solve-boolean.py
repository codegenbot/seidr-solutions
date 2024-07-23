```
def solve_boolean(expression):
    def recursive_eval(tokens, i=None):
        result = None
        operator = None
        operator_precedence = {'&': 1, '|': 0}
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
                while len(stack) > 0 and tokens[stack[-1]] == operator:
                    if stack[-1] == '&' and result is True:
                        return True
                    elif stack[-1] == '|' and result is False:
                        return False
                    stack.pop()
                if len(stack) > 0:
                    i = stack[-1]
            elif token == ')':
                while tokens[i] != '(':
                    i += 1
                i += 1

    expression = expression.replace(' | ', '|').replace('&', ' & ')
    return recursive_eval(expression.split())