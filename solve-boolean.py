def solve_boolean(expression):
    result = "T"
    operator_stack = []
    temp = "T"

    for char in expression:
        if char in ["|", "&"]:
            while len(operator_stack) > 0 and (operator_stack[-1] == "|" or operator_stack[-1] == "&"):
                if operator_stack.pop() == "|":
                    result = "T" if eval(f"({temp}) | {'F' if temp == 'T' else 'T'}") else "F"
                else:
                    result = "T" if eval(f"({temp}) & {'F' if temp == 'T' else 'T'}") else "F"
            temp = "T"
        elif char == "(":
            operator_stack.append(char)
        elif char == ")":
            while len(operator_stack) > 0 and operator_stack[-1] != "(":
                if operator_stack.pop() in ["|", "&"]:
                    if operator_stack[-1] == "|":
                        result = "T" if eval(f"({temp}) | {'F' if temp == 'T' else 'T'}") else "F"
                    else:
                        result = "T" if eval(f"({temp}) & {'F' if temp == 'T' else 'T'}") else "F"
            if len(operator_stack) > 0 and operator_stack[-1] == "(":
                operator_stack.pop()
        else:
            temp = "F" if char.upper() == 'T' else "T"

    return result