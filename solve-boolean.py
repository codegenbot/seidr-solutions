def solve_boolean(expression):
    def evaluate(i=0):
        if i == len(expression):
            return None
        if expression[i] in ["T", "F"]:
            return expression[i] == "T"
        elif expression[i] == "(":
            i += 1
            while expression[i] != ")":
                i += 1
            return evaluate(i)
        operators = {"&": lambda x, y: x and y, "|": lambda x, y: x or y}
        if expression[i] in ["|", "&"]:
            op = expression[i]
            j = i + 1
            while expression[j] in [" ", ")"]:
                j += 1
            left = evaluate(j)
            right = expression[expression.index(")") + 1:]
            return eval(f"({left}) {op} ({str(evaluate(0))[1:-1]})")

    return str(evaluate())