def solve_boolean(expression):
    if expression.startswith("T"):
        return True
    elif expression == "F":
        return False
    elif "&" in expression or "|" in expression:
        for char in expression:
            if char == "(":
                return solve_boolean(char) 
            elif char == ")":
                return solve_boolean(0)
    else:
        left = evaluate(expression[:expression.index(char)])
        right = evaluate(expression[expression.index(char)+1:])
        if char == "&":
            return left and right
        elif char == "|":
            return left or right