```
def solve_boolean(expression):
    bool_map = {'T': True, 'F': False}
    expression = ''.join(bool_map.get(c, c) for c in expression)
    while '&' in expression:
        start = 0
        end = 0
        for i in range(len(expression)):
            if expression[i] == '&':
                end = i
            elif expression[i] == '|':
                start = i
                break
        or_parts = expression[:start].split('|')
        result = all(map(bool_map.get, or_parts))
        expression = expression[end + 1:]
        if not result:
            return False
    return any(map(bool_map.get, expression.split('|')))