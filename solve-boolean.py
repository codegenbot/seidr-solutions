def solve_boolean(expression):
    def parse_boolean-expression(expression):
        stack = []
        result = None
        for char in expression:
            if char in ['T', 'F']:
                if result is not None:
                    raise ValueError("Invalid operation")
                result = char == 'T'
            elif char in ['|', '&']:
                while len(stack) > 0 and stack[-1] != '(':
                    op, val = stack.pop()
                    if op == '&':
                        result = result and val
                    else:
                        result = result or val
                stack.append((char, result))
                result = None
            elif char == '(':
                stack.append((None, None))
            elif char == ')':
                while len(stack) > 0 and stack[-1][0] != '(':
                    op, val = stack.pop()
                    if op == '&':
                        result = result and val
                    else:
                        result = result or val
                stack.pop() # discard the (
        return result

    return parse_boolean_expression(expression)