def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    
    expression = expression[::-1]
    
    stack = []
    
    for char in expression:
        if char in ['&', '|']:
            b = stack.pop()
            a = stack.pop()
            stack.append(a and b) if char == '&' else a or b
        elif char in ['T', 'F']:
            stack.append(char == 'T')
        else:
            raise ValueError("Invalid expression")
    
    return stack[0]