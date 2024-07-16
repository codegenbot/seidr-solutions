def solve_boolean(expression):
    if expression[0] == '(':
        return evaluate(expression[1:-1])
    elif expression in ['T', 'F']:
        return expression == 'T'
    elif len(expression) > 2 and (expression[:2] == '| ' or expression[:2] == '& '):
        return solve_boolean(expression[:2]) or solve_boolean(expression[3:])
    else:
        if expression[1] == '|':
            return solve_boolean(expression[:2]) or solve_boolean(expression[3:])
        elif expression[1] == '&':
            return solve_boolean(expression[:2]) and solve_boolean(expression[3:])

def evaluate(expression):
    if ' |' in expression:
        return solve_boolean(expression.replace(' |', '|')) or solve_boolean(expression.replace('&', '&').replace(' |', '|'))
    else:
        return solve_boolean(expression)