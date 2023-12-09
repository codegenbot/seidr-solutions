def solve_boolean(expression):
    expression = expression.lower()

    if '&' in expression:
        operands = expression.split('&')
        return all(operand == 't' for operand in operands)
    elif '|' in expression:
        operands = expression.split('|')
        return any(operand == 't' for operand in operands)
    else:
        return expression == 't'