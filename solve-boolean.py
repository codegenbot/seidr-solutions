def solve_boolean(expression):
    if expression == "t":
        return True
    elif expression == "f":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    else:
        stack = []
        for char in expression[::-1]:
            if char in ["&", "|"]:
                stack.append(
                    not bool(stack.pop() != eval("True" if char == "&" else "False"))
                )
        return stack[0]