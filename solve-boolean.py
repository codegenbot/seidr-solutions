def solve_boolean(s):
    if s == "T":
        return True
    elif s == "F":
        return False
    elif "&" in s and "|" in s:
        raise ValueError("Invalid expression")
    else:
        stack = []
        for c in reversed(s):
            if c in {"&", "|"}:
                a, b = stack.pop(), stack.pop()
                if c == "&":
                    stack.append(a and b)
                elif c == "|":
                    stack.append(a or b)
            else:
                stack.append(c == "T")
        return stack[0]