def solve_boolean(s):
    if s == "T":
        return True
    elif s == "F":
        return False
    elif "&" in s and "|" in s:
        raise ValueError("Invalid expression")
    else:
        stack = []
        for c in s[::-1]:
            if c in ["&", "|"]:
                b2, b1 = stack.pop(), stack.pop()
                if c == "&":
                    stack.append(b1 and b2)
                elif c == "|":
                    stack.append(b1 or b2)
            else:
                stack.append(c == "T")
        return stack[0]