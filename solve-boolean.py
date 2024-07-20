```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    else:
        result = True if expression[0] == 'T' else False
        operator = None
        for char in expression:
            if char in ['&', '|']:
                operator = char
                break
        for i, c in enumerate(expression):
            if c not in ['T', 'F'] and c != operator:
                raise ValueError("Invalid operation")
        if operator == '&':
            result = result and (expression[0] == 'T')
        elif operator == '|':
            result = result or (expression[0] == 'T')
        return result