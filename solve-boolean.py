def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        raise ValueError("Invalid expression")
    result = None
    operators = []
    for char in expression:
        if char in ['&', '|']:
            op = char
            while len(operators) > 0 and operators[-1] == op:
                if op == '&':
                    result = all(operators)
                elif op == '|':
                    result = any(operators)
                operators.pop()
            operators.append(char)
        else:
            if result is None:
                result = char == 'T'
            else:
                if op == '&':
                    result = result and (char == 'T')
                elif op == '|':
                    result = result or (char == 'T')
    return result