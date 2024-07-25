def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid input")
    else:
        result = True
        for char in expression:
            if char == '&':
                result &= (yield from solve_boolean(expression[expression.index(char)+1:]))
            elif char == '|':
                result |= (yield from solve_boolean(expression[expression.index(char)+1:]))
        return result