def solve_boolean(expression):
    if expression.startswith("T"):
        return True
    elif expression == "F":
        return False
    elif "&" in expression or "|" in expression:
        for char in expression:
            if char == "(":
                index = expression.index(char)
                expression = (
                    expression[:index]
                    + solve_boolean(expression[index + 1 :])
                    + expression[index + 2 :]
                )
            elif char == ")":
                index = expression.index(char)
                return eval("({0})".format(expression[:index]))
        return eval(expression)