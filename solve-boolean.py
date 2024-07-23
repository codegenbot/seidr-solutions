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
                    elif result is None and token != 'T':
                        return False
                    return result
                elif token in ['|', '&']:
                    operator = token
                    if stack and tokens[stack[-1]] != '(':
                        while len(stack) > 0 and tokens[stack[-1]] == operator:
                            if operator == '&' and result is True:
                                return True
                            elif operator == '|' and result is False:
                                return False
                            stack.pop()
                    else:
                        if not stack:
                            return result
                    i += 1
                elif token == ')':
                    while tokens[i] != '(':
                        i += 1
                    i += 1

            if len(stack) > 0:
                return recursive_eval(tokens, stack[-1]+1)

        expression = expression.replace(' | ', '|').replace('&', ' & ')
        return recursive_eval(expression.split())