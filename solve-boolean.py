def solveBoolean(expression):
    def boolean_operator(a, b, operator):
        if operator == '&':
            return a and b
        elif operator == '|':
            return a or b

    expression = expression.strip().lower()
    stack = []
    result = None

    for char in expression:
        if char in ['t', 'f']:
            result = (char == 't')
        elif char in ['&', '|']:
            while len(stack) > 0 and stack[-1] in ['&', '|']:
                operator = stack.pop()
                b = stack.pop()
                a = stack.pop()
                if operator == '&':
                    stack.append(boolean_operator(a, b, operator))
                else:
                    stack.append(boolean_operator(a, b, operator))
            stack.append(result)
            result = None
        elif char in ['(', ')']:
            if char == '(':
                stack.append(char)
            elif char == ')':
                while stack[-1] != '(':
                    stack.pop()
                stack.pop()

    return result