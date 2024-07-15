def solve_boolean(expression):
    expression = expression.replace("T", "True").replace("F", "False")

    def solve(stack):
        result = None
        while len(stack) > 1:
            operand2 = stack.pop()
            operator_ = stack.pop()
            if operator_ == "|":
                result = eval(f"{result} or {operand2}")
            else:
                result = eval(f"{result} and {operand2}")
        return bool(result)

    tokens = expression.replace("|", " | ").replace("&", " & ")
    tokens = [part.strip() for part in tokens.split()]
    stack = []
    for token in tokens:
        if token not in ["|", "&"]:
            stack.append(eval(token))
        else:
            while len(stack) > 1:
                operand2 = stack.pop()
                operator_ = stack.pop()
                if operator_ == "|":
                    result = eval(f"{operand2} or {stack[0]}")
                else:
                    result = eval(f"{operand2} and {stack[0]}")
            stack.append(result)
    return solve(stack)