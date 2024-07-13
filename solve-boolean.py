def solve(input_str):
    def evaluate(expression):
        if expression == "T":
            return True
        elif expression == "F":
            return False
        elif "&" in expression and "|" in expression:
            raise ValueError("Invalid expression")
        else:
            left, right = expression.split("&")
            if "|" in left or "|" in right:
                raise ValueError("Invalid expression")
            return evaluate(left) and evaluate(right)

    return evaluate(input_str)