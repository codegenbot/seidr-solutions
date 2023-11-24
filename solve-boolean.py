def solve_boolean(expression):
    stack = []
    operators = set(["&", "|"])

    i = 0
    while i < len(expression):
        if expression[i] == " ":
            i += 1
            continue

        if expression[i] in operators:
            operator = expression[i]
            operand2 = stack.pop()
            operand1 = stack.pop()

            if operator == "&":
                result = operand1 and operand2
            else:
                result = operand1 or operand2

            stack.append(result)
            i += 1
        else:
            j = i
            while j < len(expression) and expression[j] != " ":
                j += 1
            operand = expression[i:j]
            stack.append(operand == "T")
            i = j

    return stack[0]