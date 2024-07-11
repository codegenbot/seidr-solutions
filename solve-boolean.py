def solve_boolean(expression):
    operations = {"&": lambda a, b: a and b, "|": lambda a, b: a or b}

    stack = []
    temp_expr = ''
    for char in expression:
        if char in ["T", "F"]:
            if temp_expr:
                stack.append(temp_expr)
                temp_expr = ''
            if char == 'T':
                stack.append(True)
            else:
                stack.append(False)
        elif char in operations:
            if temp_expr:
                stack.append(temp_expr)
                temp_expr = ''
            stack.append(char)
        elif char == '(':
            temp_expr = ''
        elif char == ')':
            while len(stack) > 1 and stack[-1] != '(':
                op = stack.pop()
                b = stack.pop()
                if op == "&":
                    stack.append(b and stack.pop())
                else:
                    stack.append(b or stack.pop())
            stack.pop()  # Remove the '('
    if temp_expr:
        stack.append(temp_expr)

    while len(stack) > 1:
        op = stack.pop()
        b = stack.pop()
        if op == "&":
            stack.append(b and stack.pop())
        else:
            stack.append(b or stack.pop())

    return stack[0]