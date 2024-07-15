def solve_boolean(expression):
    expression = expression.replace("T", "True").replace("F", "False")
    stack = []
    tokens = expression.split("|")
    for token in tokens:
        if '&' in token:
            operator_, *operands = token.split('&')
            operator_ = eval(f"lambda {operand1}, {operand2}: {operand1} and {operand2}")
            for operand in operands: stack.append(bool(operand))
        else:
            stack.append(eval(token))
    result = None
    while len(stack) > 1:
        operand2 = stack.pop()
        operator_ = stack.pop()
        result = operator_(result, operand2)
    return bool(result)