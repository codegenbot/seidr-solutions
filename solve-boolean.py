def solveBoolean(expression):
    def evaluate(node):
        if node.isdigit():
            return True if int(node) else False
        elif node == "T":
            return True
        elif node == "F":
            return False
        elif node == "|":
            left = evaluate(expression[: expression.index(node)])
            right = evaluate(expression[expression.index(node) + 1 :])
            return left or right
        elif node == "&":
            left = evaluate(expression[: expression.index(node)])
            right = evaluate(expression[expression.index(node) + 1 :])
            return left and right

    return evaluate(expression)