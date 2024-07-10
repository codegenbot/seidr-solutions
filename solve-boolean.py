def solve_boolean(expression):
    try:
        return eval(expression.replace('T', 'True').replace('F', 'False'))
    except NameError as e:
        raise SyntaxError("Invalid expression: {}".format(e))