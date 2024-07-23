def solve_boolean(expression):
    def or_(x, y):
        return x or y

    def and_(x, y):
        return x and y

    if expression == "t":
        return True
    elif expression == "f":
        return False
    else:
        ops = []
        num1 = ""
        for c in expression:
            if c in "&|":
                if num1:
                    ops.append(eval(num1))
                num1 = ""
                ops.append(c)
            else:
                num1 += c
        ops.append(eval(num1))

        result = ops[0]
        for op in ops[1:]:
            if op == "|":
                result = or_(result, ops[ops.index(op) + 1])
            elif op == "&":
                result = and_(result, ops[ops.index(op) + 1])
        return result