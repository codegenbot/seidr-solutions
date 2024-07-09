def solve_boolean(expression):
    def eval_expr(expression):
        if expression == "T":
            return True
        elif expression == "F":
            return False
        elif len(expression) > 1 and expression[0] in ["&", "|"]:
            i = 1
            j = len(expression) - 1
            while i <= j and (expression[i] in ["&", "|"]):
                i += 1
            left = eval_expr(expression[:i-1])
            right = eval_expr(expression[i:])
            if expression[0] == "&":
                return left and right
            else:
                return left or right

        return {"T": True, "F": False}[expression]

    return eval_expr(expression)