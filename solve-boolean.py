def solve_boolean(expression):
    stack = []
    operators = set(["&", "|", "t", "F", "f"])

    i = 0
    while i < len(expression):
        if expression[i] == " ":
            i += 1
            continue

        if expression[i] in operators and len(stack) >= 3:
            operator = expression[i]
            operand2 = stack.pop()
            operand1 = stack.pop()

            result = {
                "&": (operand1 == "t" and operand2 == "t"),
                "|": (operand1 == "t" or operand2 == "t")
            }.get(operator, False)

            stack.append("t" if result else "F")

        i += 1

    if len(stack) == 1 and stack[0] in ["t", "F"]:
        return stack[0] == "t"
    else:
        return False