```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise Exception("Invalid expression")
    else:
        result = eval(' '.join(map(lambda x: str(x), expression)))
        return result