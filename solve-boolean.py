```
def solve_boolean(expression):
    def evaluate_expression(expression):
        if expression.isnumeric():
            return int(expression) == 1
        elif expression.isdigit():
            return bool(int(expression))
        if "(" in expression:
            end = expression.index(")")
            return evaluate_expression("(" + expression[:end+1])

        while "&" in expression and "|" in expression:
            while "&" in expression:
                left, right = expression.split("&", 1)
                expression = str(evaluate_expression(left)) + " & "

            while "|" in expression:
                left, right = expression.split("|", 1)
                expression = left + " | " + right

        if "&" in expression and "|" not in expression:
            return eval("(" + expression.replace("&", ") and (") + ")")

        if "|" in expression and "&" not in expression:
            return eval("(" + expression.replace("|", ") or (") + ")")

        if "&" in expression and "|" in expression:
            left, right = expression.split("&")
            return eval("((" + str(evaluate_expression(left)) + ") and (" + evaluate_expression(right) + "))")

        if "T" in expression or "True" in expression:
            return True
        elif "F" in expression or "False" in expression:
            return False