def solve_boolean(expression):
    def evaluate(expr):
        if expr == "T":
            return True
        elif expr == "F":
            return False
        elif "&" in expr and "|" in expr:
            raise Exception("Invalid expression")
        elif "&" in expr:
            left, right = expr.split("&")
            return not (evaluate(left) or evaluate(right))
        else:
            left, right = expr.split("|")
            return evaluate(left) or evaluate(right)

    return evaluate(expression)