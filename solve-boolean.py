def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False

    stack = []
    current_expression = ''
    for char in expression + '&':  
        if char in ['&', '|']:
            if current_expression:
                if current_expression == 'T':
                    stack.append(True)
                elif current_expression == 'F':
                    stack.append(False)
                else:
                    raise ValueError("Invalid input")
                current_expression = ''
            b1, b2 = stack.pop(), stack.pop()
            stack.append(b1 and b2) if char == '&' else stack.append(b1 or b2)
        elif char in ['T', 'F']:
            current_expression += char
    return stack[0]