def solve_boolean(expression):
    stack = []
    result = None
    operator = None

    for char in expression:
        if char == "t":
            stack.append(True)
        elif char == "f":
            stack.append(False)
        elif char in ["&", "|"]:
            operator = char
        else:
            op1 = stack.pop()
            op2 = stack.pop()
            
            if result is None:
                result = op1
            else:
                if operator == "&":
                    result = result and op1
                elif operator == "|":
                    result = result or op1

    return result