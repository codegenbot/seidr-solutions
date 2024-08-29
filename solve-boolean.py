def solve_boolean(s):
    def evaluate_boolean(s):
        stack = []
        for char in s:
            if char == "T":
                stack.append(True)
            elif char == "F":
                stack.append(False)
            elif char == "|":
                b1, b2 = stack.pop(), stack.pop()
                stack.append(b1 or b2)
            elif char == "&":
                b1, b2 = stack.pop(), stack.pop()
                stack.append(b1 and b2)
        return stack[0]

    return str(evaluate_boolean(s))