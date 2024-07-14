```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    
    result = None
    operator = ''
    
    for char in reversed(expression):
        if char in ['&', '|']:
            if operator == '&':
                result = result and (char == 'T')
            else:
                result = result or (char == 'T')
            operator = char
        elif char not in ['T', 'F']:
            raise ValueError("Invalid expression")
    
    return result