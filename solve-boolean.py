```
def solve_boolean(expression):
    def parse_expression(expression):
        stack = []
        current = ''
        for char in expression:
            if char in ['T', 'F']:
                stack.append(current)
                current = char
            elif char in '|&':
                stack.append(eval('bool({})'.format(current)) if current != '' else None)
                current = ''
        stack.append(eval('bool({})'.format(current)) if current != '' else None)
        return reduce(lambda a, b: a and (b[0] or b[1]) if '&' in expression else a or b[0], stack, True)

    return parse_expression(expression.lower())