def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    else:
        result = None
        op = ''
        for char in expression:
            if char in '&|':
                if op == '':
                    result = bool(char == '&')
                else:
                    if op == '&':
                        result &= (char == 'T')
                    else:
                        result |= (char == 'T')
                op = char
            elif result is None:
                result = char == 'T'
        return result