```
def solve_boolean(expression):
    result = "T"
    operator_stack = []
    temp = "T"

    for char in expression:
        if char in ["|", "&"]:
            while len(operator_stack) > 1 and operator_stack[-1] in ["|", "&"]:
                temp_result = eval(f"({temp} {operator_stack.pop()} {'F' if operator_stack.pop() == 'T' else 'T'})")
                result = "T" if temp_result else "F"
            temp = "T"
        elif char == "(":
            operator_stack.append(char)
        elif char == ")":
            while len(operator_stack) > 1 and operator_stack[-1] != "(":
                if operator_stack.pop() in ["|", "&"]:
                    result = eval(f"({temp} {operator_stack.pop()} {'F' if operator_stack.pop() == 'T' else 'T'})")
            if operator_stack and operator_stack[-1] == "(":
                operator_stack.pop()
        else:
            temp = "F" if char.upper() == 'T' else "T"

    return "T" if result == "T" else "F"