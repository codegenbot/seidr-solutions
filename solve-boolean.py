```
def solve_boolean(expression):
    bool_map = {'T': True, 'F': False}
    expression = ''.join(bool_map.get(c, c) for c in expression)
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
        expression = str(all(p != 'F' for p in or_parts) and expression[start + 1:])
    return expression.split('|') != ['F']