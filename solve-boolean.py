def solve_boolean(expression):
    result = "T"
    operator_stack = []
    temp = "T"

    for char in expression:
        if char == "(":
            operator_stack.append(char)
        elif char == ")":
            while len(operator_stack) > 1 and operator_stack[-1] != "(":
                operator = operator_stack.pop()
                if operator in ["|", "&"]:
                    temp_result = "T" if eval(f"({temp} {operator} {'F' if temp == 'T' else 'T'})") else "F"
                    result = temp_result
            if operator_stack and operator_stack[-1] == "(":
                operator_stack.pop()
        elif char in ["|", "&"]:
            while len(operator_stack) > 1 and operator_stack[-1] in ["|", "&"]:
                operator = operator_stack.pop()
                if operator == "|":
                    temp_result = "T" if eval(f"({temp} {operator} {'F' if temp == 'T' else 'T'})") else "F"
                    result = temp_result
                elif operator == "&":
                    temp_result = "F" if eval(f"({temp} {operator} {'F' if temp == 'T' else 'T'})") else "T"
                    result = temp_result
            temp = "T"
        else:
            temp = "F" if char.upper() == 'T' else "T"

    return "True" if result == "T" else "False"