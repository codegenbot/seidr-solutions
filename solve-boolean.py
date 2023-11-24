def solve_boolean(expression):
    stack = []
    operators = set(["&", "|", "!"])  # Change ~ to !

    i = 0
    while i < len(expression):
        if expression[i] == " ":
            i += 1
            continue

        if expression[i] in operators:
            operator = expression[i]
            if operator == "!":
                operand = stack.pop()
                result = eval(f"{operator}{operand}")
            else:
                operand2 = stack.pop()
                operand1 = stack.pop()
                result = eval(f"{operand1} {operator} {operand2}")
            stack.append(result)
            i += 1
        else:
            j = i
            while j < len(expression) and expression[j] != " ":
                j += 1
            operand = expression[i:j]
            stack.append(operand)
            i = j

    return stack[0] == "T"