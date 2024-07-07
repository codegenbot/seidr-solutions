def solve_boolean(expression):
    while '()' in expression:
        expression = expression.replace('()','')
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        return (solve_boolean(expression.split('&')[0]) and solve_boolean(expression.split('&')[1]))
    elif '|' in expression:
        return (solve_boolean(expression.split('|')[0]) or solve_boolean(expression.split('|')[1]))