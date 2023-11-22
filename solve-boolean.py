def solve_boolean(expr):
    return eval(expr.replace('|', ' or ').replace('&', ' and ').replace('T', 'True').replace('F', 'False'))