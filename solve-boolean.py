def solve.Boolean(expression):
    def or_(a, b):
        return a or b

    def and_(a, b):
        return a and b

    if expression == 't':
        return True
    elif expression == 'f':
        return False
    else:
        result = expression[0]
        for i in range(1, len(expression)):
            if expression[i] in ['|', '&']:
                operator = expression[i]
                expression = expression[:i].replace('T', str(True)).replace('F', str(False))
                break
        for char in expression:
            if char not in ['|', '&']:
                other = char == 'T'
                expression = expression.replace(char, '')
                if operator == '|':
                    result = or_(result, other)
                elif operator == '&':
                    result = and_(result, other)
        return result