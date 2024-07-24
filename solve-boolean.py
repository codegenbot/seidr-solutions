def solve_boolean(expression):
    result = True if expression == "T" else False  
    for i in range(len(expression)):
        char = expression[i]
        if char == "&":
            result = result and (expression[i + 1 :] != "F")
        elif char == "|":
            result = result or (expression[i + 1 :] != "F")

    return result