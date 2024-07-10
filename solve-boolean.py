def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    else:
        stack = []
        for c in reversed(expression):
            if c in {"&", "|"}:
                a = stack.pop()
                b = stack.pop()
                if c == "&":
                    stack.append(a and b)
                elif c == "|":
                    stack.append(a or b)
            else:
                stack.append(c == "T")
        return stack[0]