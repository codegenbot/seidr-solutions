```
def solve_boolean(expression):
    tokens = expression.split('|')
    result = True
    for token in tokens:
        if ' &' in token:
            token = token.replace(' &', '')
            result &= token == 'T'
        elif '&' in token:
            token = token.replace('&', '')
            result &= token == 'T'
    return result