def solve_boolean(expression):
    if expression == 't':
        return True
    elif expression == 'f':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        result = True if expression[0] == 't' else False
        for operator, value in zip(['&', '|'], [expression.split(operator)[1:] for _ in range(2)]):
            if len(value) > 1:
                raise ValueError("Invalid expression")
            if operator == '&':
                result = result and (value[0][0] == 't')
            elif operator == '|':
                result = result or (value[0][0] == 't')
        return result