def solveBoolean(expression):
    def evaluate(subexpr):
        if subexpr[0] == "T":
            return True
        elif subexpr[0] == "F":
            return False
        elif len(subexpr) > 1 and subexpr[1] in ["&", "|"]:
            return (
                evaluate(subexpr[:2]) and evaluate(subexpr[2:])
                if subexpr[1] == "&"
                else evaluate(subexpr[:2]) or evaluate(subexpr[2:])
            )
        else:
            raise ValueError("Invalid expression")

    return evaluate(expression)