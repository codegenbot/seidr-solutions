def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False

    stack = []
    current_value = None
    operator = None

    for char in reversed(expression):
        if char in ["&", "|"]:
            while not (current_value is not None and operator is not None):
                right = current_value
                left = stack.pop()
                if operator == "&":
                    current_value = left and right
                elif operator == "|":
                    current_value = left or right
                operator = None
            current_value, operator = None, char
        else:
            current_value = char == "T"

    return current_value