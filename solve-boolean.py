def solve_boolean(expression):
    stack = []

    i = 0
    while i < len(expression):
        if expression[i] == " ":
            i += 1
            continue

        if expression[i] in ["&", "|"]:
            if len(stack) < 3:
                return False
            operator = expression[i]
            operand2 = stack.pop()
            operand1 = stack.pop()

            result = {
                "&": (operand1 == "T" and operand2 == "T"),
                "|": (operand1 == "T" or operand2 == "T")
            }.get(operator, False)

            stack.append("T" if result else "F")
        elif expression[i] in ["T", "F"]:
            stack.append(expression[i])
        else:
            return False

        i += 1

    if len(stack) == 1 and stack[0] in ["T", "F"]:
        return stack[0] == "T"
    else:
        return False