def solve_boolean(expression):
    def or_gate(a, b):
        return a or b

    def and_gate(a, b):
        return a and b

    expression = expression.replace("&", "and").replace("|", "or")

    stack = []
    for char in reversed(expression):
        if char in ["F", "T"]:
            stack.append(char == "T")
        elif char in ["and", "or"]:
            op = char
            a = stack.pop()
            b = stack.pop()
            if op == "and":
                stack.append(and_gate(a, b))
            else:
                stack.append(or_gate(a, b))

    return bool(stack[0])