def solve_boolean(expression):
    def evaluate():
        if expression[0] in ["T", "F"]:
            return expression[0] == "T"
        elif expression[0] == "(":
            i = 1
            temp = evaluate()
            while i < len(expression) and expression[i] != ")":
                i += 1
            return temp
        operator = expression[0]
        if operator in ["|", "&"]:
            i += 1
            left = evaluate()
            right = expression[i:]
            return {"|": lambda: left or evaluate(), "&": lambda: left and evaluate()}[operator]()
        else:
            raise Exception("Invalid input")

    return evaluate()(expression)