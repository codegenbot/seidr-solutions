def solve_boolean(expression):
    def evaluate expresion:
        if 'T' in expression:
            return True
        elif 'F' in expression:
            return False
        elif '&' in expression and '|' in expression:
            left = expression.split('&')[0]
            right = '&'.join(expression.split('&')[1:])
            return evaluate(left) and evaluate(right)
        elif '&' in expression and not '|' in expression:
            left, right = expression.split('&')
            return evaluate(left) and evaluate(right)
        elif '|' in expression and not '&' in expression:
            left, right = expression.split('|')
            return evaluate(left) or evaluate(right)
        else:
            return True
    return evaluate(expression)