def solve_boolean(expression):
    operations = {"&": lambda a, b: a and b, "|": lambda a, b: a or b}

    def evaluate_expression(expression):
        stack = []
        for char in expression:
            if char in ["T", "F"]:
                stack.append(bool(char == "T"))
            elif char == "(":
                stack.append(char)
            elif char == ")":
                while len(stack) > 0 and stack[-1] != "(":
                    top = stack.pop()
                    if top == "(":
                        break
                    b = stack.pop()
                    a = stack.pop()
                    stack.append(operations[char](a, b))
            elif char in operations:
                while (
                    len(stack) > 0
                    and stack[-1] != "("
                    and precedence.get(char, 2) <= precedence.get(stack.pop(), 2)
                ):
                    pass

        return stack[0]

    precedence = {"&": 1, "|": 0}

    if expression == "t":
        return True
    elif expression == "f":
        return False

    result = evaluate_expression(expression)

    return result