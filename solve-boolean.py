def solveBoolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        return eval(' '.join(map(lambda x: f'({x})', expression.split('&|'))))
    elif '&' in expression:
        result = True
        for term in expression.split '&':
            if 'T' not in term or 'F' in term:
                result &= False
                break
        return result
    else:
        return eval(expression.replace('|', ' or ').replace('&', ' and '))