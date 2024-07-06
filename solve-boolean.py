```
def solve_boolean(expression):
    bool_map = {'T': True, 'F': False}
    expression = ''.join(bool_map.get(c, c) for c in expression)
    while '&' in expression or '|' in expression:
        start = 0
        end = 0
        for i in range(len(expression)):
            if expression[i] == '&':
                end = i
            elif expression[i] == '|':
                start = i
                break
        and_parts = expression[:start].split('&')
        or_parts = expression[start + 1:].split('|')[0]
        result = all(bool_map.get(p, p) for p in and_parts)
        if not result:
            return False
        expression = '|'.join(or_parts.split('|')) + expression[end:]
    return bool_map.get(expression, 'F') != 'F'