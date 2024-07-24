def solveBoolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    else:
        result = bool(expression[0].upper())
        for char in expression[1:]:
            if char == '&':
                result &= (bool(char.upper()))
            elif char == '|':
                result |= (bool(char.upper()))
        return result