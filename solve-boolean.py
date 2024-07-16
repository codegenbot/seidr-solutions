def solve_boolean(expression):
    stack = []
    temp = "T"
    result = "T"

    for char in expression:
        if char == "(":
            stack.append(char)
        elif char == ")":
            while len(stack) > 1 and stack[-1] != "(":
                op = stack.pop()
                if op == "|":
                    result = "T" if eval(f"({temp} {op} {'F' if temp == 'T' else 'T'})") else "F"
                elif op == "&":
                    result = "F" if eval(f"({temp} {op} {'F' if temp == 'T' else 'T'})") else "T"
            stack.pop()
        elif char in ["|", "&"]:
            while len(stack) > 1 and stack[-1] in ["|", "&"]:
                op = stack.pop()
                if op == "|":
                    result = "T" if eval(f"({temp} {op} {'F' if temp == 'T' else 'T'})") else "F"
                elif op == "&":
                    result = "F" if eval(f"({temp} {op} {'F' if temp == 'T' else 'T'})") else "T"
            stack.append(char)
        else:
            temp = "F" if char.upper() == 'T' else "T"

    return "True" if result == "T" else "False"