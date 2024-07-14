def solve_boolean(expression):
    def eval_expression(e):
        if e == "T":
            return True
        elif e == "F":
            return False
        elif "&" in e:
            a, b = e.split("&")
            return eval_expression(a) and eval_expression(b)
        else:
            a, b = e.split("|")
            return eval_expression(a) or eval_expression(b)

    return eval_expression(expression)