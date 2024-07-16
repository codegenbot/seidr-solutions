def solve_boolean(expression):
    def evaluate(i=0):
        if i >= len(expression):
            return expression[0] == "T"

        if expression[i] in ["T", "F"]:
            return expression[i] == "T"
        elif expression[i] in ["|", "&"]:
            left = evaluate(i + 1)
            op = expression[i]
            i += 1
            while i < len(expression) and expression[i] not in ["|", "&"]:
                pass
            right = evaluate(i)
            if op == "|":
                return left or right
            else:
                return left and right

    return evaluate()