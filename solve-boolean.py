def solve_boolean(expression):
    def bool_eval(exp):
        if exp == "T":
            return True
        elif exp == "F":
            return False
        elif "&" in exp:
            left, right = exp.split("&")
            return bool_eval(left) and bool_eval(right)
        else:
            left, right = exp.split("|")
            return bool_eval(left) or bool_eval(right)

    return bool_eval(expression)