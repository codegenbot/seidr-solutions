def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        result = True
        for char in expression:
            if char == '&':
                result &= (previous_char == 'T')
            elif char == '|':
                result |= (previous_char == 'T')
            previous_char = char
        return result