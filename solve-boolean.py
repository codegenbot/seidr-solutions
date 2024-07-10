```
def solve_boolean(expression):
    return eval(''.join(['T' if c == 'T' else 'False' for c in expression]).replace('&', lambda s: 'and ' + s).replace('|', lambda s: ' or ' + s))