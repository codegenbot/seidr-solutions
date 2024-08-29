def solve_boolean(expression):
    global previous_char
    previous_char = ''
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    else:
        result = True
        for char in expression:
            if char == '&':
                result &= (previous_char == 'T')
            elif char == '|':
                result |= (previous_char == 'T')
            global previous_char; previous_char = char
        return result