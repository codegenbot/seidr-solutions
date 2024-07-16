```
def solve_boolean(expression):
    def and_operator(a, b):
        return "T" if a == "T" and b == "T" else "F"

    def or_operator(a, b):
        return "F" if a == "F" and b == "F" else "T"

    result = "T"
    operator_stack = []
    for char in expression:
        if char in ["|", "&"]:
            if char == "&":
                temp_result = result
                result = "T"
                while operator_stack and operator_stack[-1] != "(":
                    result = and_operator(result, operator_stack.pop())
                if not operator_stack or operator_stack[-1] == "(":
                    operator_stack.append("(")
                expression = expression[expression.index(char)+1:]
                for char in expression:
                    if char == ")":
                        while operator_stack and operator_stack[-1] != "(":
                            result = and_operator(result, operator_stack.pop())
                        operator_stack.pop()
                        break
            else:
                temp_result = result
                result = "T"
                while operator_stack and operator_stack[-1] != "(":
                    result = or_operator(result, operator_stack.pop())
                if not operator_stack or operator_stack[-1] == "(":
                    operator_stack.append("(")
        elif char == "(":
            operator_stack.append(char)
        elif char == ")":
            while operator_stack and operator_stack[-1] != "(":
                result = or_operator(result, operator_stack.pop())
            operator_stack.pop()
        else:
            if result == "&":
                result = and_operator(result, char)
            elif result == "|":
                result = or_operator(result, char)

    return "T" if result == "T" else "F"

print(solve_boolean('t|t&t&t&t&f|t'))