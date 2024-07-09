def solve_boolean(expression):
    def eval_expr(expression):
        if expression == "T":
            return True
        elif expression == "F":
            return False
        elif expression[0] in ["&", "|"]:
            left = eval_expr(expression[1])
            right = eval_expr(expression[2:])
            if expression[0] == "&":
                return ((left and right) or (expression[1:] != "T" | expression[1:] != "F")) 
            else:
                return ((left or right) and (expression[1:] != "F & F"))
    return eval_expr(expression)