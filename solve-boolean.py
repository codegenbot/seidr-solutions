def solve_boolean(expression):
    operations = {"&": lambda a, b: a and b, "|": lambda a, b: a or b}
    precedence = {"&": 1, "|": 0}

    if expression == "t":
        return True
    elif expression == "f":
        return False

    stack = []
    for char in expression:
        if char in ["T", "F"]:
            stack.append(bool(char == "T"))
        elif char == "(":
            temp_stack = stack.copy()
            stack = []
            stack.append(temp_stack)
        elif char == ")":
            temp_stack = stack.pop()[::-1]
            while temp_stack[-1] != "(":
                stack.append([temp_stack.pop()])
            temp_stack.pop()  # discard the '('
            while len(stack) > 0:
                a = stack.pop()
                b = stack[0].pop()
                if char in operations:
                    stack.append(operations[char](a, b))
                else:
                    stack.append(a)
        elif char in operations:
            while len(stack) > 0 and (
                stack[-1][0] != "("
                and precedence.get(char, 2) <= precedence.get(stack[-1][0], 2)
            ):
                pass
    return stack[0][0]