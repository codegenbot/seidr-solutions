[PYTHON]
def solve_boolean(expression):
    stack = []
    for char in expression:
        if char == "(":
            stack.append(char)
        elif char == ")":
            while len(stack) > 0 and stack[-1] != "(":
                stack.pop()
            if len(stack) == 0:
                return False
            stack.pop()
        elif char == "|":
            stack.append(char)
        elif char == "&":
            stack.append(char)
        elif char == "T":
            stack.append(True)
        elif char == "F":
            stack.append(False)
        else:
            return False
    while len(stack) > 0:
        if stack[-1] == "|":
            stack.pop()
            if len(stack) == 0:
                return False
            right = stack.pop()
            left = stack.pop()
            stack.append(left or right)
        elif stack[-1] == "&":
            stack.pop()
            if len(stack) == 0:
                return False
            right = stack.pop()
            left = stack.pop()
            stack.append(left and right)
    if len(stack) == 1:
        return stack[0]
    else:
        return False
[/PYTHON]
[TESTS]
# Test case 1:
assert solve_boolean("t|f&f|t&t&f&t|f|f|f|f&f|f&f&t&t&t|t") == True
# Test case 2:
assert solve_boolean("t|f&f|t&t&f&t|f|f|f|f&f|f&f&t&t&t") == False
# Test case 3:
assert solve_boolean("(t|f)&(f|t)") == True
[/TESTS]
