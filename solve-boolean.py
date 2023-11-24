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
                result = operand1 == "T" and operand2 == "T"
            elif operator == "|":
                result = operand1 == "T" or operand2 == "T"
            
            stack.append("T" if result else "F")
            
            i += 1
        else:
            j = i
            while j < len(expression) and expression[j] != " ":
                j += 1
            operand = expression[i:j]
            stack.append(operand)
            i = j

    return stack[0] == "T"