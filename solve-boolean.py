Here is the solution:

def solve_boolean(s):
    if s == 'T':
        return True
    elif s == 'F':
        return False
    elif '&' in s and '|' in s:
        raise ValueError("Invalid input")
    else:
        result = True
        for char in s:
            if char == '&':
                result &= eval('True' if next_char == 'T' else 'False')
            elif char == '|':
                result |= eval('True' if next_char == 'T' else 'False')
            next_char = char

    return result