def solve_boolean(expression):
    operations = {"&": lambda a, b: a and b, "|": lambda a, b: a or b}
    precedence = {"&": 1, "|": 0}

    stack = []

    for char in expression:
        if char == "T" or char == "F":
            stack.append(bool(char == "T"))
        elif char in operations:
            while len(stack) >= 2 and (stack[-1] != "&" or precedence[stack.pop()] >= precedence[char]):
                pass
            stack.append(operations[char](stack.pop(), stack.pop()))

    return stack[0]