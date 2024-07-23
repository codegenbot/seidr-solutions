def solve_boolean(expression):
    def evaluate_expression(expression):
        if not expression:
            return None
        elif expression[0] in {"T", "F"}:
            return expression[0] == "T"
        elif expression[0] == "(":
            result = evaluate_expression(expression[1:])
            if expression[-1] != ")":
                raise ValueError("Unclosed parenthesis")
            return result
        else:
            left = evaluate_expression(expression[:3])
            op = expression[1]
            right = evaluate_expression(expression[4:-1])
            if op == "&":
                return left and right
            elif op == "|":
                return left or right

    return str(int(evaluate_expression(expression)))