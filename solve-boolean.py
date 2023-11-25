def evaluate_boolean_expression(expression):
    return eval(expression)

expression = input("Enter a boolean expression: ")
result = evaluate_boolean_expression(expression)
print(result)