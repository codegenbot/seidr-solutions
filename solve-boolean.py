```
def solve_boolean(expression):
    operators = {"&": lambda x, y: bool(x) and bool(y), "|": lambda x, y: bool(x) or bool(y)}
    stack = []
    for char in expression:
        if char in "TF":
            stack.append(char == "T")
        elif char in "&|":
            while len(stack) >= 2 and operators[char](stack.pop(), stack.pop()):
                stack.pop()
            stack.append(char)
    return all(stack)