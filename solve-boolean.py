def solve_boolean(expression):
    def eval_expr(expression):
        if expression == "T":
            return True
        elif expression == "F":
            return False
        elif expression[0] in ["&", "|"]:
            if "&" == expression[0]:
                return all(eval_bool(sub) for sub in expression[1:].split("&"))
            else:
                return any(eval_bool(sub) for sub in expression[1:].split("|"))

    def eval_bool(expression):
        if "T" in expression and "F" in expression:
            raise ValueError("Invalid Boolean expression")
        return eval_expr(expression)

    try:
        return eval_bool(expression)
    except ValueError as e:
        print(e)