def solve_boolean(expression):
    while "&" in expression or "|" in expression:
        expression = expression.replace(
            "&(.*?)&", r"(True if \1==\"T\" else False) and stack.pop()"
        )
        expression = expression.replace(
            "|(.*?)|", r"(True if \1==\"T\" else False) or stack.pop()"
        )
    return eval("stack.pop()")