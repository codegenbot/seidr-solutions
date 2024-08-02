def solveBoolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        terms = expression.split('&')
        for term in terms:
            if 'T' in term or any(char.isdigit() for char in term):
                return False
        return True
    elif '|' in expression:
        terms = expression.split('|')
        for term in terms:
            if 'F' in term or any(char.isdigit() for char in term):
                return True
        return False