def solve_boolean(expression):
    result = "T"
    operator_stack = []
    for char in expression:
        if char in ["|", "&"]:
            while len(operator_stack) > 1 and operator_stack[-1] in ["|", "&"]:
                b = result
                result = (operator_stack.pop() == "|" and or_operator) or (operator_stack.pop() == "&" and and_operator)(result, "F")
        elif char == "(":
            operator_stack.append(char)
        elif char == ")":
            while len(operator_stack) > 1 and operator_stack[-1] != "(":
                b = result
                result = (operator_stack.pop() == "|" and or_operator) or (operator_stack.pop() == "&" and and_operator)(result, "F")
            if operator_stack and operator_stack[-1] == "(":
                operator_stack.pop()
        else:
            if char.upper() == 'T':
                result = "T"
            elif char.upper() == 'F':
                result = "F"

    return "T" if result == "T" else "F"

or_operator = lambda a, b: "T" if a == "T" or b == "T" else "F"

and_operator = lambda a, b: "T" if a == "T" and b == "T" else "F"

print(solve_boolean('t|t&t&t&t&f|t'))