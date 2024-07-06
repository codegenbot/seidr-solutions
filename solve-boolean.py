def solve_boolean(expression):
    bool_map = {'T': True, 'F': False}
    expression = ''.join(bool_map.get(c, c) for c in expression)
    result = True
    while '&' in expression:
        start = 0
        end = 0
        for i in range(len(expression)-1, -1, -1):
            if expression[i] == '&':
                start = i
            elif expression[i] == '|':
                end = i
                break
        or_parts = expression[:end+1].split('|')
        result &= all(p != 'F' for p in or_parts)
        expression = expression[start + 1:]
    return all(expression.split('|') != ['F'])