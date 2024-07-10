def solve_boolean(expression): 
    result = True if expression[0] == 't' else False
    if '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    elif '&' in expression: 
        for operator, value in zip(['&'], [expression.split(operator)[1:] for _ in range(1)]):
            if len(value) > 1:
                raise ValueError("Invalid expression")
            result = result and (value[0][0] == 't')
    elif '|' in expression: 
        for operator, value in zip(['|'], [expression.split(operator)[1:] for _ in range(1)]):
            if len(value) > 1:
                raise ValueError("Invalid expression")
            result = result or (value[0][0] == 't')
    return result