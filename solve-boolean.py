def solve_boolean(expr):
    while '&' in expr:
        index = expr.index('&')
        result = eval(expr[index-1]) and eval(expr[index+1])
        expr = expr[:index-1] + str(result) + expr[index+2:]

    while '|' in expr:
        index = expr.index('|')
        result = eval(expr[index-1]) or eval(expr[index+1])
        expr = expr[:index-1] + str(result) + expr[index+2:]

    return eval(expr.replace('T', 'True').replace('F', 'False'))