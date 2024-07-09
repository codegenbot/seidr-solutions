```
def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    else:
        stack = [False]
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

print(solve_boolean("f&t&f&f|f|t|f|f|f"))