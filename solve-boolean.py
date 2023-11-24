def solve_boolean(expression):
    stack = []
    operators = set(["&", "|", "T", "F", "(", ")"])

    i = 0
    while i < len(expression):
        if expression[i] == " ":
            i += 1
            continue

        if expression[i] in operators:
            if expression[i] == "(":
                stack.append(expression[i])
            elif expression[i] == ")":
                while stack and stack[-1] != "(":
                    result = stack.pop()
                    stack.pop()
                    stack.append(result)
            elif len(stack) >= 2:
                operator = expression[i]
                operand2 = stack.pop()
                operand1 = stack.pop()

                result = {
                    "&": (operand1 and operand2),
                    "|": (operand1 or operand2)
                }.get(operator, False)

                stack.append("T" if result else "F")

        elif expression[i] in ["T", "F"]:
            stack.append(expression[i])

        i += 1

    if len(stack) == 1 and stack[0] in ["T", "F"]:
        return stack[0] == "T"
    else:
        return False