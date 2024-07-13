def solve_boolean(expression):
    if expression == "t":
        return True
    elif expression == "f":
        return False
    
    def eval_expression():
        stack = []
        for char in expression:
            if char in ["&", "|"]:
                while stack and stack[-1] != "(":
                    op = stack.pop()
                    val2 = stack.pop()
                    val1 = stack.pop()
                    if op == "&":
                        stack.append(val1 and val2)
                    else:
                        stack.append(val1 or val2)
                if char == "(":
                    stack.append(char)
                else:
                    stack.append(char)
            elif char in ["t", "f"]:
                stack.append(eval(char.lower() == 't'))
        while len(stack) > 1:
            op = stack.pop()
            val2 = stack.pop()
            val1 = stack.pop()
            if op == "&":
                stack.append(val1 and val2)
            else:
                stack.append(val1 or val2)
        return stack[0]

    return eval_expression()