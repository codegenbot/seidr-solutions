def solve_boolean(expression):
    stack = []
    i = len(expression) - 1
    while i >= 0:
        if expression[i] in ["T", "F"]:
            stack.append(expression[i] == "T")
        elif expression[i] == "|":
            b1, b2 = stack.pop(), stack.pop()
            stack.append(b1 or b2)
        elif expression[i] == "&":
            b1, b2 = stack.pop(), stack.pop()
            stack.append(b1 and b2)
        i -= 1
    return stack[0]