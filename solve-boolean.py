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
            while stack:
                a = stack.pop()
                b = temp_stack.pop()
                if operations.get(char):
                    stack.append(operations[char](a[0], b))
                else:
                    stack.append(a)
        elif char in operations:
            while (
                len(stack) > 0
                and stack[-1] != "("
                and precedence.get(char, 2) <= precedence.get(stack[-1][0], 2)
            ):
                pass
    return stack[0][0]