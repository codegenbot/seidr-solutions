def solve_boolean(expression):
    expression = expression.replace("|", " or ").replace("&", " and ")

    stack = []
    operators = set(["and", "or"])
    precedence = {"and": 0, "or": 1}

    i = 0
    while i < len(expression):
        if expression[i] == " ":
            i += 1
            continue

        if expression[i] in operators:
            operator = expression[i]
            while (
                stack
                and stack[-1] in operators
                and precedence[stack[-1]] >= precedence[operator]
            ):
                operand2 = stack.pop()
                operator = stack.pop()
                operand1 = stack.pop()
                result = f"{operand1} {operator} {operand2}"
                stack.append(result)
            stack.append(operator)
            i += 1
        else:
            j = i
            while j < len(expression) and expression[j] != " ":
                j += 1
            operand = expression[i:j]
            stack.append(operand)
            i = j

    if len(stack) > 1:
        operand2 = stack.pop()
        operator = stack.pop()
        operand1 = stack.pop()
        result = f"{operand1} {operator} {operand2}"
        stack.append(result)

    return eval(stack[0])