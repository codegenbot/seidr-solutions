def solve_boolean(expression):
    result = "T"
    operator_stack = []
    for char in expression:
        if char in ["|", "&"]:
            while operator_stack and (operator_stack[-1] == "(" or operator_stack[-1] != char):
                b = result
                if operator_stack[-1] == "|":
                    result = or_operator(result, "F")
                else:
                    result = and_operator(result, "F")
                operator_stack.pop()
            operator_stack.append(char)
        elif char == "(":
            operator_stack.append(char)
        elif char == ")":
            while operator_stack and operator_stack[-1] != "(":
                b = result
                if operator_stack[-1] == "|":
                    result = or_operator(result, "F")
                else:
                    result = and_operator(result, "F")
                operator_stack.pop()
            operator_stack.pop()
        else:
            if char == "T":  
                result = "T"
            elif char == "F":  
                result = "F"

    return "T" if result == "T" else "F"

or_operator = lambda a, b: "T" if a == "T" or b == "T" else "F"

and_operator = lambda a, b: "T" if a == "T" and b == "T" else "F"

print(solve_boolean('t|t&t&t&t&f|t'))