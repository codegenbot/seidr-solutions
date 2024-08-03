def solve_boolean(expression):
    def evaluate(expression):
        if expression == "T":
            return True
        elif expression == "F":
            return False
        elif len(expression) > 1:
            a = evaluate(expression[0])
            b = evaluate(expression[1:])
            if "&" in expression:
                return a and b
            else:
                return a or b

    return evaluate(expression)