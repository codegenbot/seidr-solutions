```
def solve_boolean(expression):
    if expression == 't':
        return True
    elif expression == 'f':
        return False
    else:
        for operation in expression.split('&'):
            if operation != 'f' and not solve_boolean(operation):
                return False
        return solve_boolean(expression.split('&')[0].split('|')[0] == 't')