def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False

    operators = {'&': lambda x, y: x and y, '|': lambda x, y: x or y}

    while any(operator in expression for operator in operators.keys()):
        for operator in operators:
            if f'{"T"} {operator} {"F"}' in expression:
                left, right = expression.split(f'{operator}')
                expression = str(operators[operator](solve_boolean(left), solve_boolean(right)))

    return eval(expression) if expression != 'True' else True