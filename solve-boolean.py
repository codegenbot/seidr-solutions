```
import operator

def solve_boolean(expression):
    expression = expression.replace("T", "True").replace("F", "False")
    stack = []
    for token in expression.split():
        if token == "|":
            stack.append(operator.or_)
        elif token == "&":
            stack.append(operator.and_)
        else:
            stack.append(eval(token))
    result = stack[0]
    while len(stack) > 1:
        operand2 = stack.pop()
        operator_ = stack.pop()
        result = operator_.__call__(result, operand2)
    return str(result).upper()