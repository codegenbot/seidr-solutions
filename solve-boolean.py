def solve_boolean(expression):
    def bool_map(char):
        return char == 'T'

    for op in ['|', '&']:
        expression = expression.replace(op, lambda x: '(' + x.group().replace(op, str(bool_map(x.group()[0])) + ' and ') + ')' if op == '&' else '(' + x.group().replace(op, str(bool_map(x.group()[0])) + ' or ') + ')')

    return bool_map(expression)