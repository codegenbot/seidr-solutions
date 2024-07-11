def evaluate_boolean_expression(expression):
    return eval(expression.replace("t", "True").replace("f", "False"))


expression = input()
print(evaluate_boolean_expression(expression))