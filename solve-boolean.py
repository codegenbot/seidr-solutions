def solve_boolean(expression):
    parts = expression.split('|')
    result = eval(parts[0])
    for i in range(1, len(parts)):
        result = result or eval(parts[i])
    return result