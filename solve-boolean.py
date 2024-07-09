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
                if char == "T":
                    stack.append(True)
                else:
                    stack.append(False)
        return stack[0]

print(solve_boolean("f&t&f&f|f|t|f|f|f"))