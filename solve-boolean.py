def solve_boolean(expression):
    def eval_expr(expression):
        stack = []
        left = ""
        operators = "&|"
        while expression:
            if expression[0] in operators:
                stack.append(left)
                left = ""
                while expression and expression[0] in "()":
                    expression = expression[1:]
                if not expression or expression[0] in operators:
                    return False
                right = ""
                i = 0
                for char in expression:
                    if char in operators:
                        break
                    right += char
                    i = len(expression)
                if right == "T":
                    left = eval_expr(left) and True or left
                elif right == "F":
                    left = eval_expr(left) or False or left
                else:
                    left = "(" + right + ")"
                    return eval_expr(left) and stack[-1] or stack[-1]
            else:
                if expression[0] in "T":
                    left += "T"
                elif expression[0] == "F":
                    left += "F"
                else:
                    left += "("
                expression = expression[1:]
        return eval_expr(left) and True or False

    return eval_expr(expression)