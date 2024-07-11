```
def solve_boolean(expression):
    operations = {"&": lambda a, b: a and b, "|": lambda a, b: a or b}

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
            b = stack.pop()
            a = stack.pop()
            while stack and stack[-1] != "(":
                op = stack.pop()
                if op == "|":
                    b = operations[op](b, stack.pop())
                else:
                    a = operations[op](a, stack.pop())
            stack.append(a)
        elif char in operations:
            while len(stack) > 0 and stack[-1] in ["|", "&"]:
                top_op = stack.pop()
                if top_op == "|":
                    b = operations[top_op](stack.pop(), stack.pop())
                    stack.append(b)
                else:
                    a = operations[top_op](stack.pop(), stack.pop())
                    stack.append(a)
            stack.append(char)

    return stack[0]