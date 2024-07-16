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
        i = 1
        if operator in ["|", "&"]:
            left = evaluate()
            right = expression[i:]
            if right[0] == "(":
                right = evaluate() + right[1:-1]
            else:
                while right[0] in ["T", "F", "|", "&"] or (right[0] == "(" and right.count("(") > 1):
                    right = right[1:]
            return {"|": lambda: left or right, "&": lambda: left and right}[operator]()
        else:
            raise Exception("Invalid input")

    return evaluate()