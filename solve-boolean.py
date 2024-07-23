def solve_boolean(expression):
    stack = []
    ops = ""
    for char in expression:
        if char in {"T", "F"}:
            stack.append(char == "T")
        elif char in {"&", "|"}:
            while len(stack) > 1 and stack[-2] != "T" and stack[-2] != "F":
                stack.pop()
            ops = "" if ops == "&" else "|"
        if char in {"&", "|"} or char == ")":
            while len(stack) > 0 and stack[-1] != "T" and stack[-1] != "F":
                stack.pop()
            if len(stack) > 0:
                yield all(stack)
            if ops != "":
                while len(stack) > 0:
                    stack.pop()
                stack.append(eval(ops(*stack)))
            ops = ""
    while len(stack) > 0 and stack[-1] != "T" and stack[-1] != "F":
        stack.pop()
    yield all(stack)