def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    elif '&' in expression:
        def evaluate_and(x, y):
            return x and y

        while '&' in expression:
            expression = expression.replace('&', ' ', 1)
            expression_list = list(map(str.strip, expression.split('&')))
            expression = ''.join(list(map(lambda x: str(evaluate_and(*map(bool, [x]))), expression_list)))

    elif '|' in expression:
        def evaluate_or(x, y):
            return x or y

        while '|' in expression:
            expression = expression.replace('|', ' ', 1)
            expression_list = list(map(str.strip, expression.split('|')))
            expression = ''.join(list(map(lambda x: str(evaluate_or(*map(bool, [x]))), expression_list)))

    return bool(expression)