```
def solve_boolean(expression):
    expression = expression.replace("T", "True").replace("F", "False")
    stack = []
    for token in expression.split():
        if token == "and":
            stack.append(operator.and_)
        elif token == "or":
            stack.append(operator.or_)
        else:
            stack.append(eval(token))
    result = stack[0]
    while len(stack) > 1:
        operand2 = stack.pop()
        operator_ = stack.pop()
        result = operator_.result(result, operand2)
    return result