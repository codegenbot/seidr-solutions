def solve_boolean(expression):
    operations = {"&": lambda a, b: a and b, "|": lambda a, b: a or b}
    precedence = {"&": 1, "|": 0}

    if expression == "t":
        return True
    elif expression == "f":
        return False

    stack = []
    for char in expression:
        if char in ("T", "F"):
            stack.append(bool(char == "T"))
        elif char in operations:
            b = stack.pop()
            a = stack.pop()
            stack.append(operations[char](a, b))
        elif char == "|":
            while len(stack) > 1 and stack[-2] != "&":
                stack.pop()