```
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
            stack.append(char)
        elif char == ")":
            while stack and stack[-1] != "(":
                b = stack.pop()
                a = stack.pop()
                stack.append(operations[char](a, b)))
        elif char in operations:
            while len(stack) > 0 and stack[-1] != "(" and precedence[char] < precedence.get(stack.pop(), 2):
                pass
            if char == "|":
                while len(stack) > 1 and stack[-2] != "&":
                    stack.pop()
    return stack[0]