def solve_boolean(expression):
    if "(" not in expression:
        if expression == "t":
            return True
        elif expression == "f":
            return False
    else:
        i = 0
        count = 0
        while i < len(expression):
            if expression[i] == "(":
                count += 1
            elif expression[i] == ")":
                count -= 1
            i += 1
        subexpression = expression[: (i - 1)]
        result = solve_boolean(subexpression)

        op = expression[i - 1]
        val = expression[i + 1 :]

        if op == "&":
            return result and eval(val)
        elif op == "|":
            return result or eval(val)

    for op, val in zip(["&", "|"], [f"result {op} False", f"result {op} True"]):
        if eval(val):
            result = solve_boolean(f"{result} {op} {val.split()[2]}")