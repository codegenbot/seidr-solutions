expression = input()


def evaluate_boolean(expression):
    if expression == "t":
        return True
    elif expression == "f":
        return False
    else:
        left, operator, right = expression
        if operator == "&":
            return evaluate_boolean(left) and evaluate_boolean(right)
        elif operator == "|":
            return evaluate_boolean(left) or evaluate_boolean(right)


print(evaluate_boolean(expression))