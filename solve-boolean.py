```
def solve_boolean(expression):
    def or_operator(a, b): return "T" if a == "T" or b == "T" else "F"
    def and_operator(a, b): return "T" if a == "T" and b == "T" else "F"

    result = "T"
    operator_stack = []
    for char in expression:
        if char in ["|", "&"]:
            while len(operator_stack) > 1 and (operator_stack[-1] in ["|", "&"]):
                b = result
                op = operator_stack.pop()
                if op == "|":
                    result = or_operator(result, "F")
                else:
                    result = and_operator(result, "F")
        elif char == "(":
            operator_stack.append(char)
        elif char == ")":
            while len(operator_stack) > 1 and operator_stack[-1] != "(":
                op = operator_stack.pop()
                if op == "|":
                    result = or_operator(result, "F")
                else:
                    result = and_operator(result, "F")
            if operator_stack and operator_stack[-1] == "(":
                operator_stack.pop()
        else:
            if char.upper() in ['T', 'F']:
                result = char.upper()

    return "True" if result == "T" else "False"

print(solve_boolean('t|t&t&t&t&f|t'))