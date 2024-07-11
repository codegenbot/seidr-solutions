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
        if char in ("T", "F"):
            stack.append(bool(char == "T"))
        elif char in operations:
            b = stack.pop()
            a = stack.pop()
            stack.append(operations[char](a, b))
        elif char in precedence:
            while len(stack) > 0 and stack[-1] != precedence.get(char):
                stack.pop()