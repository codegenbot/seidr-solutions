```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression or '|' in expression:
        first_open = expression.index('(')
        second_close = expression.find(')')
        if second_close == -1:
            right = ''
            left = expression[:first_open]
        else:
            left = expression[:first_open]
            right = expression[first_open+1:second_close].strip()
        return (solve_boolean(left) and solve_boolean(right)) if expression[0] == '&' else (solve_boolean(left) or solve_boolean(right))
    return True