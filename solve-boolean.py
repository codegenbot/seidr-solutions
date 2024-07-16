```
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
        operators = {"&": lambda x, y: x and y, "|": lambda x, y: x or y}
        if expression[0] in ["|", "&"]:
            op = expression[0]
            left = evaluate()
            right = expression[2:]
            if op == "&":
                return left and evaluate()
            else:
                return left or evaluate()
        else:
            return evaluate()

    return evaluate()