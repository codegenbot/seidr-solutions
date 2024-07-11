def solve_boolean(expression):
    operations = {"&": lambda a, b: a and b, "|": lambda a, b: a or b}

    stack = []
    for char in expression:
        if char in ["T", "F"]:
            stack.append(bool(char == "T"))
        elif char == "(":
            stack.append("(")
        elif char == ")":
            while stack[-1] != "(":
                b = stack.pop()
                a = stack.pop()
                stack.append(operations[char](a, b))
            stack.pop()  # Remove the (
    return stack[0]