```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    while '&' in expression or '|' in expression:
        if '&' in expression:
            left, right = expression.split('&', 1)
            expression = str(solve_boolean(left)) and str(solve_boolean(right))
        elif '|' in expression:
            left, right = expression.split('|', 1)
            expression = str(solve_boolean(left)) or str(solve_boolean(right))
    return eval(expression.lower())

print("Result:", "True" if solve_boolean('f|f|f&t|t|t|t|f|t&f|f') else "False")