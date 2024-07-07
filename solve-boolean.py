```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression or '|' in expression:
        left = expression.split('(')[0]
        rest = expression.split('(')[1].split(')')[0]
        while ')' in rest:
            rest = rest.replace(')(', ')').replace('((','( ').replace('))','')')
        return (solve_boolean(left) and solve_boolean(rest)) if expression[0] == '&' else (solve_boolean(left) or solve_boolean(rest))
    return True