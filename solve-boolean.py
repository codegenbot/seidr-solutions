def solve_boolean(expression):
    def and_op(a, b): return a and b
    def or_op(a, b): return a or b

    stack = []
    result = None
    operator = None

    for char in expression:
        if char in ["&", "|"]:
            operator = char
            continue
        if char == "(":
            stack.append(result)
            stack.append(operator)
            result = None
            operator = None
        elif char == ")":
            b = stack.pop()
            op = stack.pop()
            a = stack.pop()
            if op == "&": result = and_op(a, b)
            else: result = or_op(a, b)
        else:
            if result is None: result = eval(char)  # boolean values (T/F)
            else:
                if operator == "&": result = and_op(result, eval(char))
                else: result = or_op(result, eval(char))

    return result