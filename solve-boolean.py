def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False

    operators = {"&": lambda a, b: a and b, "|": lambda a, b: a or b}
    stack = []
    operator_stack = []

    for char in expression[::-1]:
        if char in operators:
            while operator_stack and operators[operator_stack[-1]] <= operators[char]:
                apply_operator(stack, operators[operator_stack.pop()])
            operator_stack.append(char)
        else:
            stack.append(char == "T")

    while operator_stack:
        apply_operator(stack, operators[operator_stack.pop()])

    return stack[0]


def apply_operator(stack, op):
    b = stack.pop()
    a = stack.pop()
    stack.append(op(a, b))