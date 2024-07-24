expression = input()
result = eval(expression.replace("t", "True").replace("f", "False"))
print(result)