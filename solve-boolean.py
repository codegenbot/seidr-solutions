```
def solve_boolean(expression):
    expression = expression.replace("T", "True").replace("F", "False")
    stack = []
    tokens = expression.split("|")
    for token in tokens:
        if '&' in token:
            operator_, *operands = token.split('&')
            ops = {'&': lambda x, y: x and y, '|': lambda x, y: x or y}
            operator_ = ops[operator_]
            for operand in operands: stack.append(bool(operand))
        else:
            stack.append(eval(token))
    result = None
    while len(stack) > 1:
        operand2 = stack.pop()
        operator_ = stack.pop()
        result = operator_(result, operand2)
    return bool(result)