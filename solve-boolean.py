def solveBoolean(expression):
    def evaluate(node):
        if node.isdigit():
            return True if int(node) else False
        elif node == "T":
            return True
        elif node == "F":
            return False
        elif node in ["|", "&"]:
            i = expression.index(node)
            left = evaluate(expression[:i])
            return (node == "|" and left or right) or (node == "&" and left and right)

    return evaluate(expression)