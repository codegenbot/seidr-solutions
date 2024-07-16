```
def solve_boolean(expression):
    result = "T"
    operator_stack = []
    temp = "T"

    for char in expression:
        if char == "(":
            operator_stack.append(char)
        elif char == ")":
            while len(operator_stack) > 1 and operator_stack[-1] != "(":
                if operator_stack.pop() in ["|", "&"]:
                    temp_result = "T" if (operator_stack.pop() == "|" and or_operator)(temp, "F") else "F"
                    result = temp_result
            if operator_stack and operator_stack[-1] == "(":
                operator_stack.pop()
        elif char in ["|", "&"]:
            while len(operator_stack) > 1 and operator_stack[-1] in ["|", "&"]:
                temp_result = "T" if (operator_stack.pop() == "|" and or_operator) or (operator_stack.pop() == "&" and and_operator)(temp, "F") else "F"
                result = temp_result
            temp = "T"
        elif char in ["t", "f"]:
            temp = "F" if char.upper() == 'T' else "T"

    return "T" if result == "T" else "F"

or_operator = lambda a, b: "T" if a == "T" or b == "T" else "F"

and_operator = lambda a, b: "T" if a == "T" and b == "T" else "F"

print(solve_boolean('t|t&t&t&t&f|t'))