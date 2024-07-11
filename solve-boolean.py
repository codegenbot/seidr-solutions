def solve_boolean(expression):
    stack = []
    operations = {"&": lambda a, b: a and b, "|": lambda a, b: a or b}
    for char in expression:
        if char in ["T", "F"]:
            stack.append(bool(char == "T"))
        elif char in operations:
            while len(stack) >= 2 and (
                (
                    operations["&"].__code__.co_code in str(type(stack[-1]))
                    and operations["|"].__code__.co_code not in str(type(stack[-2]))
                )
                or (
                    operations["|"].__code__.co_code in str(type(stack[-1]))
                    and operations["&"].__code__.co_code not in str(type(stack[-2]))
                )
            ):
                b = stack.pop()
                a = stack.pop()
                stack.append(operations[char](a, b))
        elif char == "(":
            stack.append(char)
        elif char == ")":
            while len(stack) > 0 and stack[-1] != "(":
                stack.pop()
            stack.pop()

    return stack[0]