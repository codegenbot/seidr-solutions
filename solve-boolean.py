def solve_boolean(expression):
    def evaluate(a, b, op):
        if op == "&":
            return a and b
        elif op == "|":
            return a or b
        else:
            raise ValueError("Invalid operator")

    stack = []
    for char in expression[::-1]:
        if char in ["T", "t"]:
            stack.append(True)
        elif char in ["F", "f"]:
            stack.append(False)
        elif char in ["&", "|"]:
            a, b = stack.pop(), stack.pop()
            stack.append(evaluate(a, b, char))
    return stack[0]