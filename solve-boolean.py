def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        result = True
        ops = []
        for char in expression:
            if char in '&|':
                ops.append(char)
            else:
                result = (result & bool(eval(f"bool({char})"))) if char == '&' else (result | eval(f"bool({char})"))
        return result