def solveBoolean(expression):
    def evaluate(expr):
        if expr == "T":
            return True
        elif expr == "F":
            return False
        elif "&" in expr and "|" in expr:
            return evaluate(expr.replace("&", "&").replace("|", "|"))
        else:
            left, operator, right = expr.split(operator)
            if operator == "&":
                return evaluate(left) and evaluate(right)
            else:
                return evaluate(left) or evaluate(right)

    return evaluate(expression)