```
def solve_boolean(expression):
    def eval_expr(expression):
        if not expression: return None
        i = 0
        while i < len(expression):
            if expression[i] in ["T", "F"]:
                result = True if expression[i] == "T" else False
                i += 1
            elif expression[i] in ["&", "|"]:
                operator = expression[i]
                i += 1
                left = eval_expr(expression[:i].rstrip()) or None
                right = eval_expr(expression[i:].lstrip())
                if not left: return not right
                if not right: return not left
                if operator == "&": return left and right
                else: return left or right
        return result

    return eval_expr(expression)