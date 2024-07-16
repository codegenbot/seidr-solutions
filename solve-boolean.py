def solve_boolean(expression):
    def evaluate():
        if expression[0] in ["T", "F"]:
            return expression[0] == "T"
        elif expression[0] == "(":
            i = 1
            while expression[i] != ")":
                i += 1
            return "(%s)" % eval(evaluate()[1:-1])
        operators = {"&": lambda x, y: x and y, "|": lambda x, y: x or y}
        if expression[0] in ["|", "&"]:
            op = expression[0]
            left = evaluate()
            right = expression[2:]
            return "(" + str(left) + ") " + op + " (" + str(evaluate()[1:-1]) + ")"

    return evaluate()([0])