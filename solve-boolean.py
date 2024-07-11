```
def solve_boolean(expression):
    operations = {"&": lambda a, b: a and b, "|": lambda a, b: a or b}
    precedence = {"&": 1, "|": 0}

    stack = []
    for char in expression:
        if char in ["T", "F"]:
            stack.append(bool(char == "T"))
        elif char in ["(", ")"]:
            if char == "(":
                stack.append(char)
            else:
                while len(stack) > 0 and stack[-1] != "(":
                    top = stack.pop()
                    if top == ")": 
                        break
                    b = stack.pop()
                    a = stack.pop()
                    stack.append(operations["|"](a, b))
                stack.pop()  # Remove the opening parenthesis
        else:
            while len(stack) > 0 and stack[-1] in precedence and precedence[stack[-1]] >= {"&": 1, "|": 0}.get(char, 2):
                top = stack.pop()
                if top == "(": 
                    break
                stack.append(operations[char](stack.pop(), stack.pop()))
            stack.append(char)

    while len(stack) > 0 and stack[-1] in precedence:
        top = stack.pop()
        if top == "": 
            break
        stack.append(operations[stack.pop()](stack.pop(), stack.pop()))

    return stack[0]