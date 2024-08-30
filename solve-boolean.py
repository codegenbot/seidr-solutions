```
def solveBoolean(expression):
    def evaluate(node):
        if node.isdigit():
            return True if int(node) else False
        elif node == "T":
            return True
        elif node == "F":
            return False
        left, operator, right = node.partition(operator)
        return {
            "|": lambda: evaluate(left) or evaluate(right),
            "&": lambda: evaluate(left) and evaluate(right)
        }[operator]()

    operators = "|&"
    result = True
    for i in range(len(expression)):
        if expression[i] in operators:
            left, operator, right = expression[:i+1], expression[i], expression[i+1:]
            result = {
                "|": lambda: evaluate(left) or evaluate(right),
                "&": lambda: evaluate(left) and evaluate(right)
            }[operator]()
    return result