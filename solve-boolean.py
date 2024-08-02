def solve_boolean(expression):
    def evaluate(s):
        stack = []
        for c in reversed(s):
            if c == "|":
                a = stack.pop()
                b = stack.pop()
                stack.append(a or b)
            elif c == "&":
                a = stack.pop()
                b = stack.pop()
                stack.append(a and b)
            else:
                stack.append(c == "T")
        return stack[0]

    return str(evaluate(expression))