def solveBoolean(input_str):
    def evaluate(expression):
        if expression == "T":
            return True
        elif expression == "F":
            return False
        elif len(expression) > 1:
            a = expression[0]
            b = expression[1:]
            if expression[0] == "&" and not all([c in ["&", "|"] for c in b]):
                return a == "&"
            elif expression[0] == "|" and not any([c in ["&", "|"] for c in b]):
                return a == "|"
            else:
                return evaluate(a) and evaluate(b)
        else:
            return expression[0]

    return evaluate(input_str)