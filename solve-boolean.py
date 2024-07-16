```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid Expression")
    else:
        result = True
        and_value = None
        for char in expression:
            if char == '&':
                and_value = bool(char)
            elif char == '|':
                result |= bool(and_value or any(char == c for c in 'TF'))
                and_value = None
        return result & and_value if and_value is not None else result