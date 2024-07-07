def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression or "|" in expression:
        i = expression.index("(")
        right = expression[i + 1 : -1]
        left = expression[:i].replace(")(", ") T|F")
        if right[-1] == ")":
            result = solve_boolean(left)
            while True:
                left, right = (
                    right[1:-1].split(")(", 1)
                    if ")" in right[1:-1]
                    else (right[1:-1], "")
                )
                if not right:
                    return result
                if "(" not in right[0]:
                    break
                right = right[0].rstrip() + ") " + right[1]
            return result if expression[0] == "&" else not result
        return (
            solve_boolean(left)
            if expression[0] == "&"
            else (solve_boolean(left) or solve_boolean(right))
        )