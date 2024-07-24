def solve_boolean(expression):
    def boolean_operation(op1, op2):
        if op == "|":
            return op1 or op2
        else:
            return op1 and op2

    ops = {"|": lambda x, y: x | y, "&": lambda x, y: x & y}

    expression += "T"  # assuming the last character is not a boolean operation
    result = T = True
    F = False

    for i in range(len(expression) - 1):
        if expression[i] == "|":
            op = "|"
        elif expression[i] == "&":
            op = "&"
        else:
            continue
        op1 = T if expression[i - 1] == "T" else F
        result = boolean_operation(ops[op](op1, T), result)

    return result