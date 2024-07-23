def solve_boolean(expression):
    def recursive_eval(tokens, i=None):
        result = None
        stack = []

        while i < len(tokens):
            token = tokens[i]
            if token == '(':
                stack.append(i)
            elif token == ')':
                while stack and tokens[stack[-1]] != '(':
                    if tokens[stack.pop()] in ['|', '&']:
                        if result is not None: return result
                i += 1
            elif token in ['T', 'F']:
                if result is None: 
                    result = True if token == 'T' else False
                elif token != 'T':
                    return False
            elif token in ['|', '&']:
                operator = token
                while len(stack) > 0 and tokens[stack[-1]] == operator:
                    stack.pop()
                if result is None: 
                    if operator == '&':
                        result = True
                    else:
                        result = False
                elif operator == '&':
                    result &= (tokens[i] in ['T', 't'])
                else:
                    result |= (tokens[i] in ['T', 't'])
            i += 1

        while stack:
            return recursive_eval(tokens, stack.pop())

    expression = expression.replace(' | ', '|').replace('&', ' & ')
    return recursive_eval(expression.split())