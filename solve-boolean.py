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
                        result = recursive_eval(tokens, stack[-1]+1) if result is None else result
                i += 1
            elif token in ['T', 'F']:
                if result is None: 
                    result = True if token == 'T' else False
                elif result is None and token != 'T':
                    return False
                return result
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
                    while stack and tokens[stack[-1]] in ['T', 'F']:
                        result &= (tokens[stack.pop()] in ['T', 't'])
                else:
                    while stack and tokens[stack[-1]] in ['T', 'F']:
                        result |= (tokens[stack.pop()] in ['T', 't'])
            i += 1

        if len(stack) > 0:
            return recursive_eval(tokens, stack[-1]+1)

    expression = expression.replace(' | ', '|').replace('&', ' & ')
    return recursive_eval(expression.split())