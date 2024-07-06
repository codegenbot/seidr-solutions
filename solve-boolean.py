```Python
def solve_boolean(expression):
    expression = ''.join(map({'T': True, 'F': False}.get, expression))

    while '&' in expression and '|' in expression:
        start = 0
        end = len(expression) - 1
        for i in range(len(expression)-1, -1, -1):
            if expression[i] == '&':
                start = i
            elif expression[i] == '|':
                end = i
                break
        and_parts = expression[:end+1].split('&')
        expression = expression[start + 1:]

        for part in and_parts:
            or_parts = part.split('|')
            expression = 'F' if all(not {'T': True, 'F': False}[p] for p in or_parts) else 'T'
            expression = (expression.replace('F', '&False') + '&' + 
                          expression.replace('T', '&True')).replace('&False|&True', 'F').replace('&False&True', 'F').replace('&True&False', 'F')

    return not {'T': True, 'F': False}[expression]