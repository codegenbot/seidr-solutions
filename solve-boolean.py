def solve_boolean(expression):
    def or_operator(a, b):
        return "T" if a == "T" else b

    def and_operator(a, b):
        return "F" if a == "F" else b

    result = "T"
    operator_stack = []
    for char in expression:
        if char in ["|", "&"]:
            b = result
            result = char
        elif char == "(":
            operator_stack.append(char)
        elif char == ")":
            while operator_stack[-1] != "(":
                b = result
                result = or_operator(result, operator_stack.pop())
            operator_stack.pop()
        else:
            if result == "&" and char == "T":
                result = and_operator(result, "F")
            elif result == "|" and char == "T":
                result = or_operator(result, "F")

    return "T" if result == "T" else "F"

print(solve_boolean('t|t&t&t&t&f|t'))