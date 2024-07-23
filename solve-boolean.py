```
def solve_boolean(expression):
    tokens = expression.split('|')
    result = True
    for token in tokens:
        if '&' in token:
            subresult = all(subtoken == 'T' for subtoken in token[2:].split('&'))
        else:
            subresult = any(subtoken == 'T' for subtoken in token[1:].split('&'))
        result &= subresult
    return result