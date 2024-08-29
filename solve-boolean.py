def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    else:
        result = True
        for char in expression:
            previous_char = char
            if char == '&':
                result &= (previous_char != 'F')
            elif char == '|':
                result |= (previous_char != 'F')
        return result