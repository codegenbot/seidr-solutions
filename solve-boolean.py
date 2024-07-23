```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False

    tokens = expression.split('&')
    result = True
    for token in tokens:
        token = token.replace(' | ', '|').replace(' and ', '&').strip()
        if 'T' not in token:
            result = False
            break
    if result: 
        return True
    else:  
        return False