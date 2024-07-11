expression = input()


def evaluate_boolean(expression):
    return eval(expression.replace("T", "True").replace("F", "False"))


result = evaluate_boolean(expression)
print(result)