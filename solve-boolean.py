def solve_boolean(expression):
    if "(" not in expression:
        return eval(expression.replace("T", "True").replace("F", "False"))
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
        return eval(f"({solve_boolean(subexpression)})")