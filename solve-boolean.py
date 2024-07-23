def solve_boolean(expression):
    tokens = ['T', 'F']
    for op in '&|':
        expression = expression.replace(op, f' {op} ')
    result = eval(''.join(map(str, [token if token in tokens else f'bool({token})' for token in expression.split()])))
    return bool(result)