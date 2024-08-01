```
def solve_boolean(expression):
    if expression == 't':
        return True
    elif expression == 'f':
        return False
    elif '&' in expression:
        values = expression.split('&')
        result = [True]
        for value in values:
            result.append(value == 't')
        return all(result)
    elif '|' in expression:
        values = expression.split('|')
        result = [False]
        for value in values:
            result.append(value == 't')
        return any(result)

print(solve_boolean(input()))