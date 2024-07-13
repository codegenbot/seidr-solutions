```
def solve_boolean(expression):
    ops = {'&': lambda x, y: x and y, '|': lambda x, y: x or y}
    expression = expression.replace('(', '( T | )').replace(')', ' ')
    return eval('(' + ' '.join(map(lambda x: str(x) if x in 'TF' else ops[x]() ,expression.split()))+')')