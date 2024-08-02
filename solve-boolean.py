def solve_boolean(expression):
    def boolean_function(a, b, operator):
        if operator == "&":
            return a and b
        elif operator == "|":
            return a or b
        else:
            raise ValueError("Invalid operator")

    stack = []
    for char in expression:
        if char.upper() in ["T", "F"]:
            stack.append(char.upper() == "T")
        elif char in ["&", "|"]:
            b, a = stack.pop(), stack.pop()
            stack.append(boolean_function(a, b, char))

    return stack[0]