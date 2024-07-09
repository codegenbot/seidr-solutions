def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    else:
        stack = []
        for char in reversed(expression):
            if char in ["&", "|"]:
                stack.append({"T": lambda: left and right, "F": lambda: left or right}[char])
                if char == "&":
                    stack.append({"T": False, "F": True})
                elif char == "|":
                    stack.append({"T": True, "F": False})
            else:
                stack.append(char == "T")
        return stack[0]