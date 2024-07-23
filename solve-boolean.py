def solve_boolean(expression):
    result = True
    parts = []
    current_part = ''
    for char in expression:
        if char in '&|':
            parts.append(current_part)
            current_part = ''
            current_part += char
        else:
            current_part += char
    parts.append(current_part)
    
    for part in parts:
        if '&' in part and '|' in part:
            raise ValueError("Invalid expression")
        if '&' in part:
            result = result and (part == 'T')
        elif '|' in part:
            result = result or (part == 'T')
    
    return not result