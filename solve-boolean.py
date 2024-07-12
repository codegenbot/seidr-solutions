expression = input()
result = eval(expression.replace("T", "True").replace("F", "False"))
print(result)