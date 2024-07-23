```
def solve_boolean(expression):
    operators = {"&": lambda x, y: x and y, "|": lambda x, y: x or y}
    stack = []
    for char in expression:
        if char in ["T", "F"]:
            stack.append(char == "T")
        elif char in ["&", "|"]:
            op = char
            b2 = stack.pop()
            b1 = stack.pop()
            stack.append(operators[op](b1, b2))
    return stack[0]