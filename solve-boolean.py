expression = input().strip()


def evaluate_boolean(expression):
    if expression == "t":
        return True
    elif expression == "f":
        return False
    else:
        operand1 = evaluate_boolean(expression[0])
        operand2 = evaluate_boolean(expression[2])
        operator = expression[1]

        if operator == "&":
            return operand1 and operand2
        elif operator == "|":
            return operand1 or operand2


result = evaluate_boolean(expression)
print(result)