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
                stack.append(operations[char](a, b))
        elif char in operations:
            if len(stack) > 0 and stack[-1] == "(":
                stack.pop()
            else:
                while (len(stack) > 0 and stack[-1] != "(" 
                       and precedence[char] <= precedence.get(stack[-1], 2)):
                    b = stack.pop()
                    a = stack.pop()
                    stack.append(operations[stack[-1]](a, b))
                stack.append(operations[char](stack.pop(), stack.pop()))
    return stack[0]