```
def solve_boolean(expression):
    def eval_expression(expression):
        while "&" in expression or "|" in expression:
            if "&" in expression:
                left, right = expression.split("&", 1)
                expression = str(eval(left)) & str(eval(right))
            elif "|" in expression:
                left, right = expression.split("|", 1)
                expression = str(eval(left)) | str(eval(right))
        return eval(expression)

    if "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    
    if expression == "T":
        return True
    elif expression == "F":
        return False
    
    try:
        return eval_expression(expression)
    except Exception as e:
        raise ValueError(str(e))