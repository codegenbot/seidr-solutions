def solve_boolean(expression):
    while '|' in expression:
        left, right = expression.split('|', 1)
        expression = str(bool(left) or bool(right))
    return eval(''.join(['T' if c == 'T' else 'False' for c in expression]).replace('&', ' and ').replace('T', 'True').replace('F', 'False')