def solve_boolean(expression):
    def eval_bool(tokens):
        stack = []
        result = None
        operator = None

        while len(tokens) > 0:
            token = tokens.pop(0)
            
            if token == 'T':
                result = True
            elif token == 'F':
                result = False
            elif token in ['|', '&']:
                operator = token
                stack.append(result)
                result = None
            elif token == ')':
                while stack and stack[-1] != '(':
                    if operator == '|': 
                        result = True if stack.pop() else False
                    elif operator == '&': 
                        result = True if all(stack) else False
                stack.pop()
            elif token == '(':
                continue
            
        return result

    tokens = expression.replace(' | ', '|').replace('&', ' & ').split()
    return eval_bool(tokens)