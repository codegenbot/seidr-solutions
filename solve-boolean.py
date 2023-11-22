expression = input().lower()
expression = expression.replace("t", "True").replace("f", "False")
result = eval(expression)
print(result)