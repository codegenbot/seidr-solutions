def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    else:
        stack = []
        for char in reversed(expression):
            if char in ["&", "|"]:
                right = stack.pop()
                left = stack.pop()
                if char == "&":
                    stack.append(left and right)
                elif char == "|":
                    stack.append(left or right)
            else:
                stack.append(char == "T")
        return stack[0]


def evaluate(expression):
    while "&" in expression or "|" in expression:
        expression = expression.replace(
            "&(.*?)&", r"((\1==False) and (stack.pop()==True))"
        )
        expression = expression.replace(
            "|(.*?)|", r"((\1==False) or (stack.pop()==True))"
        )
    return stack[0]