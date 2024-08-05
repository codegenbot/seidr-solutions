```
def solve_boolean(expression):
    if expression == 't':
        return True
    elif expression == 'f':
        return False
    elif '&' in expression:
        return eval(' & '.join(map(str, expression.split('&'))))
    elif '|' in expression:
        return eval(' | '.join(map(str, expression.split('|'))))

expression = input()
print(solve_boolean(expression))