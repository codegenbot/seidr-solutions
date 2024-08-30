```
def solveBoolean(expression):
    def evaluate(node):
        if node.isdigit():
            return True if int(node) else False
        elif node == "T":
            return True
        elif node == "F":
            return False
        elif node in "|&":
            operator = node
            i = expression.index(operator)
            left = evaluate(expression[:i])
            right = evaluate(expression[i+1:])
            if operator == "|":
                return left or right
            else:
                return left and right

    return evaluate(expression)