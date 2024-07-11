def solve_boolean(expression):
    if expression == 't':
        return True
    elif expression == 'f':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        result = True if expression[0] == 't' else False
        for op in expression[1:]:
            if op == '&':
                result = result and (expression[0] == 't')
            elif op == '|':
                result = result or (expression[0] == 't')
        return result