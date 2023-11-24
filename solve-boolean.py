def evaluate_boolean_expression(expression):
    if expression == 't':
        return True
    elif expression == 'f':
        return False
    elif '|' in expression:
        return any(evaluate_boolean_expression(exp) for exp in expression.split('|'))
    elif '&' in expression:
        return all(evaluate_boolean_expression(exp) for exp in expression.split('&'))