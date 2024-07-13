def solve_boolean(expression):
    stack = []
    operators = []
    inside_parentheses = False
    for char in expression:
        if char == "(":
            inside_parentheses = True
        elif char == ")":
            inside_parentheses = False
            while operators and operators[-1] != "(":
                op = operators.pop()
                val2 = stack.pop()
                val1 = stack.pop()
                if op == "&":
                    stack.append(val1 and val2)
                else:
                    stack.append(val1 or val2)
        elif not inside_parentheses and char in ["&", "|"]:
            while operators and operators[-1] != "(":
                op = operators.pop()
                val2 = stack.pop()
                val1 = stack.pop()
                if op == "&":
                    stack.append(val1 and val2)
                else:
                    stack.append(val1 or val2)
            operators.append(char)
        elif char in ["t", "f"]:
            stack.append(eval(char.lower() == 't'))
        elif not inside_parentheses:
            while operators:
                op = operators.pop()
                val2 = stack.pop()
                val1 = stack.pop()
                if op == "&":
                    stack.append(val1 and val2)
                else:
                    stack.append(val1 or val2)
    return stack[0]