def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid input")
    elif "(" not in expression and ")" not in expression:
        if "&" in expression:
            left, right = expression.split("&")
            return not (solve_boolean(left) and solve_boolean(right))
        elif "|" in expression:
            left, right = expression.split("|")
            return solve_boolean(left) or solve_boolean(right)
    else:
        stack = []
        for char in expression:
            if char == "(":
                stack.append(char)
            elif char == ")":
                while stack[-1] != "(":
                    pass
                stack.pop()
            elif not stack:
                if "&" in expression and "|" in expression:
                    raise ValueError("Invalid input")
                if "&" in expression:
                    left, right = expression.split("&")
                    return not (solve_boolean(left) and solve_boolean(right))
                elif "|" in expression:
                    left, right = expression.split("|")
                    return solve_boolean(left) or solve_boolean(right)
        # stack should be empty now