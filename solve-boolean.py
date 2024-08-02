def solve_boolean(s):
    if s == "T":
        return True
    elif s == "F":
        return False
    elif "&" in s and "|" in s:
        raise ValueError("Invalid expression")
    else:
        stack = []
        for c in s:
            if c in ["&", "|"]:
                right = stack.pop()
                left = stack.pop()
                if c == "&":
                    result = left and right
                else:
                    result = left or right
                stack.append(result)
            else:
                stack.append(c == "T")
        return stack[0]