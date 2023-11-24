def solve_boolean(expression):
    stack = []
    operators = set(["&&", "||"])

    i = 0
    while i < len(expression):
        if expression[i] == " ":
            i += 1
            continue

        if expression[i:i+2] in operators:
            operator = expression[i:i+2]
            operand2 = stack.pop()
            operand1 = stack.pop()
            result = eval(f"{operand1} {operator} {operand2}")
            stack.append(result)
            i += 2
        else:
            j = i
            while j < len(expression) and expression[j] != " ":
                j += 1
            operand = expression[i:j]
            stack.append(operand)
            i = j

    return stack[0] == "T"