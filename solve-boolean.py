expression = input()
result = eval(expression.replace("t", "True").replace("f", "False").replace("&", "and").replace("|", "or"))
print(result)