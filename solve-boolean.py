def solve_boolean(expression):
    stack = []
    operators = set(["&", "|", "T", "F", "t"])

    i = 0
    while i < len(expression):
        if expression[i] == " ":
            i += 1
            continue

        if expression[i] in operators and len(stack) >= 2:
            operator = expression[i]
            operand2 = stack.pop()
            operand1 = stack.pop()

            result = {
                "&": (operand1 == "T" and operand2 == "T"),
                "|": (operand1 == "T" or operand2 == "T")
            }.get(operator, False)

            stack.append("T" if result else "F")

        i += 1

    if len(stack) == 1 and stack[0] in ["T", "F"]:
        return stack[0] == "T"
    else:
        return False