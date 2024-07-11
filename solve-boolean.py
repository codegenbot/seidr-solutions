def solve_boolean(expression):
    operations = {"&": lambda a, b: a and b, "|": lambda a, b: a or b}
    precedence = {"&": 1, "|" : 2}

    if expression == "t":
        return True
    elif expression == "f":
        return False

    stack = []
    for char in expression:
        if char in ["T", "F"]:
            stack.append(bool(char == "T"))
        elif char == "(":
            stack.append("(")
        elif char == ")":
            while stack and stack[-1] != "(":
                if stack[-1] == "&":
                    b = stack.pop()
                    a = stack.pop()
                    stack.append(operations["&"](a, b))
                elif stack[-1] == "|":
                    b = stack.pop()
                    a = stack.pop()
                    stack.append(operations["|"](a, b))