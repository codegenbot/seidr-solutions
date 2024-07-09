def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    else:
        stack = []
        while "&" in expression or "|" in expression:
            expression = expression.replace(
                "&(.*?)&", r"((\1==False) and (stack.pop()==True))"
            )
            expression = expression.replace(
                "|(.*?)|", r"((\1==False) or (stack.pop()==True))"
            )
        return eval(expression)