def solve_boolean(expression):
    result = True if expression == "t" else False
    for i in range(1, len(expression)):
        if expression[i] in ["|", "&"]:
            left_half = expression[:i]
            right_half = expression[i + 1 :]
            if expression[i] == "|":
                result = (
                    (result or solve_boolean(right_half))
                    if result
                    else solve_boolean(left_half)
                )
            elif expression[i] == "&":
                result = (
                    (result and solve_boolean(right_half))
                    if result
                    else solve_boolean(left_half)
                )
    return result