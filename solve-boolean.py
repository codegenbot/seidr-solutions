def solve_boolean(expression):
    expression = expression.replace("T", "True").replace("F", "False")
    stack = []
    for token in expression.split():
        if token == "and":
            stack.append(lambda a, b: a and b)
        elif token == "or":
            stack.append(lambda a, b: a or b)
        else:
            stack.append(eval(token.lower()))
    result = stack[0]
    while len(stack) > 1:
        operand2 = stack.pop()
        operator_ = stack.pop()
        result = operator_(result, operand2)
    return bool(result)