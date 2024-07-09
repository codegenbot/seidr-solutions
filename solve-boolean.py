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
                return ((left and right) or (expression[1:3] == 'f &' and eval_expr(expression[4:]) or (expression[1:3] in ['t','F']) and eval_expr(expression[4:])))
            else:
                return ((left or right) or (expression[1:2] == 'f '| and eval_expr(expression[3:]) or (expression[1:2] in ['t', 'T']) and eval_expr(expression[3:])))
        else:  
            i = expression.find("(")
            j = expression.find(")")
            return eval_expr(expression[i+1:j])
    return eval_expr(expression)