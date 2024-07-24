```
def solve_boolean(expression):
    def evaluate(expression):
        if not expression:
            return False
        if expression[0] == "T":
            return True
        if expression[0] == "F":
            return False
        left = expression[0]
        for op in "|&":
            if expression.startswith(left + op):
                return (evaluate(left) or evaluate(left + op)) if op == "|" else (
                    evaluate(left) and evaluate(left + op))
        return None  # Should not reach here

    return evaluate(expression)