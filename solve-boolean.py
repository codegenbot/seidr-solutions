def solve_boolean(expression):
    if expression == "t":
        return True
    elif expression == "f":
        return False
    else:
        stack = []
        operators = []
        precedence = {"&": 2, "|": 1}
        for char in expression:
            if char in ["&", "|"]:
                while operators and operators[-1] != "(":
                    op = operators.pop()
                    val2 = stack.pop()
                    val1 = stack.pop()
                    if op == "&":
                        stack.append(val1 and val2)
                    else:
                        stack.append(val1 or val2)
                operators.append(char)
            elif char == "(":
                operators.append(char)
            elif char in ["t", "f"]:
                stack.append(eval(char.lower() == 't'))
        while operators:
            op = operators.pop()
            if precedence.get(op, 0) > precedence.get(operators[-1], 0):
                continue
            val2 = stack.pop()
            val1 = stack.pop()
            if op == "&":
                stack.append(val1 and val2)
            else:
                stack.append(val1 or val2)
        return stack[0]