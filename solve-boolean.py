```
def solve_boolean(expression):
    if expression == "t":
        return True
    elif expression == "f":
        return False
    else:
        stack = []
        operators = []
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
            val2 = stack.pop()
            val1 = stack.pop()
            if op == "&":
                stack.append(val1 and val2)
            else:
                stack.append(val1 or val2)
        stack.append(eval(stack[0].lower() == 't'))
        return stack[0]