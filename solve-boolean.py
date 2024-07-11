def solve_boolean(expression):
    expression = expression.replace("|", " or ").replace("&", " and ").replace("T", "True").replace("F", "False")

    stack = []
    op = ""
    val = False

    for char in expression:
        if char == " ":
            continue
        elif char in ["(", "|", "&"]:
            stack.append(char)
        elif char == ")":
            while stack[-1] != "(":
                op = stack.pop()
                val2 = stack.pop()
                if op == "|":
                    val = val or val2
                elif op == "&":
                    val = val and val2
            stack.pop()
            stack.append(val)
            val = False
        else:
            if char == "T":
                stack.append(True)
            elif char == "F":
                stack.append(False)

    while stack:
        op = stack.pop()
        if op == "|":
            val = val or stack.pop()
        elif op == "&":
            val = val and stack.pop()

    return val

expression = input()
print(solve_boolean(expression))