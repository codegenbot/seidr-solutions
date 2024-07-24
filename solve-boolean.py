def solve_boolean(expression):
    if expression == 't':
        return True
    elif expression == 'f':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid operation")
    else:
        result = True
        i = 0
        while i < len(expression):
            if expression[i] == '&':
                result &= (expression[:i].endswith('t') or expression[i+1:].startswith('f'))
                i += 2
            elif expression[i] == '|':
                result |= (expression[:i].endswith('t') or expression[i+1:].startswith('f'))
                i += 2
        return result