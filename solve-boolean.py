def solve_boolean(expression):
    result = "T"
    operator_stack = []
    for char in expression:
        if char in ["|", "&"]:
            while operator_stack and operator_stack[-1] != "(":
                b = result
                result = (operator_stack.pop() == "|" and or_operator) or (operator_stack.pop() == "&" and and_operator)(result, "F")
            operator_stack.append(char)
        elif char == "(":
            operator_stack.append(char)
        elif char == ")":
            while operator_stack[-1] != "(":
                b = result
                result = (operator_stack.pop() == "|" and or_boolean) or (operator_stack.pop() == "&" and and_operator)(result, "F")
            operator_stack.pop()
        else:
            if result == "F":  
                result = "F"
            elif result == "T":  
                result = "T"

    return "T" if result == "T" else "F"

or_operator = lambda a, b: "T" if a == "T" or b == "T" else "F"

and_operator = lambda a, b: "T" if a == "T" and b == "T" else "F"

print(solve_boolean('t|t&t&t&t&f|t'))