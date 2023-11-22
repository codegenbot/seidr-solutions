def evaluate_boolean_expression(expression):
    return eval(expression.capitalize())

expression = input()
print(evaluate_boolean_expression(expression))