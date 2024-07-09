def solve_boolean(expression):
    stack = []
    while "&" in expression or "|" in expression:
        expression = expression.replace(
            "&(.*?)&", r"((\1==False) and (stack.pop()==True))"
        )
        expression = expression.replace(
            "|(.*?)|", r"((\1==False) or (stack.pop()==True))"
        )
    stack.append(eval(expression))
    return eval('and'.join(map(str, stack)))