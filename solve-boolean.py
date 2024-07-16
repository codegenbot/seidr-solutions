```
def and_operator(a, b):
    return "F" if a == "F" or b == "F" else "T"

def or_operator(a, b):
    return "T" if a == "T" or b == "T" else "F"

def solve_boolean(expression):
    result = "T"
    operator_stack = []
    for char in expression:
        if char in ["|", "&"]:
            while operator_stack and operator_stack[-1] != "(":
                op = operator_stack.pop()
                b = result
                if op == "|":
                    result = or_operator(result, "F")
                elif op == "&":
                    result = and_operator(result, "F")
            operator_stack.append(char)
        elif char == "(":
            operator_stack.append(char)
        elif char == ")":
            while operator_stack[-1] != "(":
                op = operator_stack.pop()
                b = result
                if op == "|":
                    result = or_operator(result, "F")
                elif op == "&":
                    result = and_operator(result, "F")
            operator_stack.pop()
        else:
            if char == "T":
                result = "T"
            elif char == "F":
                result = "F"

    return "T" if result == "T" else "F"

print(solve_boolean('t|t&t&t&t&f|t'))