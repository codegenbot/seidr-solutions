```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '(' in expression and ')' in expression:
        i = 0
        while True:
            i = expression.find('(', i)
            if i == -1:
                break
            j = expression.find(')', i)
            evaluated = solve_boolean(expression[i+1:j])
            expression = expression[:i] + str(evaluated) + expression[j+1:]
    elif '&' in expression:
        left, right = expression.split('&')
        return bool(solve_boolean(left)) and bool(solve_boolean(right))
    elif '|' in expression:
        left, right = expression.split('|')
        return bool(solve_boolean(left)) or bool(solve_boolean(right))