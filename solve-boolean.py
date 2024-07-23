```
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
                while i < len(tokens) and tokens[i] == operator:
                    if operator == '|':
                        return True if recursive_eval(tokens, i+1) else False
                    elif operator == '&':
                        result = recursive_eval(tokens, i+1)
                        while i < len(tokens) and tokens[i] == '&':
                            i += 1
                        return result
                i += 1

        if len(stack) > 0:
            return recursive_eval(tokens, stack[-1]+1)

    expression = expression.replace(' | ', '|').replace('&', ' & ')
    return recursive_eval(expression.split())