```Python
def solve_boolean(expression):
    expression = expression.replace(' | ', '|').replace('&', ' & ')
    return recursive_eval(expression.split())

def recursive_eval(tokens):
    result = None
    stack = []

    while len(tokens) > 0:
        token = tokens.pop(0)
        if token == '(':
            stack.append(token)
        elif token in ['T', 'F']:
            if result is None: 
                result = True if token == 'T' else False
            elif result == True: 
                result = True
            else:
                result = False
        elif token in ['|', '&']:
            operator = token
            while len(stack) > 0 and tokens[0] in ['|', '&']:
                operator += tokens.pop(0)
            if stack and stack[-1] == '(':
                result = recursive_eval(tokens)
                stack.pop()
                continue

        if result is not None:
            if operator == '&':
                result &= True if token == 'T' else False
            elif operator == '|':
                result |= True if token == 'T' else False
            return result

    while len(stack) > 0:
        stack.pop()

    return result