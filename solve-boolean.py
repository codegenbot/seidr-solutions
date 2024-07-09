def solve_boolean(expression):
    result = True
    prev_value = 'T'  
    for char in expression:
        if char == '&':
            result &= (prev_value == 'T')
        elif char == '|':
            result |= (prev_value == 'T')
        prev_value = 'T' if char == 'T' else 'F'
    return result