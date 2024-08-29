def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        result = True
        op = None
        for char in expression:
            if char == 'T':
                result = True
            elif char == 'F':
                result = False
            elif char == '&':
                op = &
            elif char == '|':
                op = |
        return eval(f"result {op}")