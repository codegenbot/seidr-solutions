def solve_boolean(expression):
    result = True
    i = 0
    while i < len(expression):
        if expression[i] == 'T':
            i += 1
        elif expression[i] == 'F':
            return False
        elif expression[i] == '&':
            i += 1
            while i < len(expression) and expression[i] != 'T':
                if expression[i] == 'F':
                    return False
                i += 1
        elif expression[i] == '|':
            i += 1
            if 'T' in expression[:i]:
                return True
    return result