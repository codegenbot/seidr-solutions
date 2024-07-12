expression = input()
result = eval(expression.replace("T", "True").replace("F", "False").replace("&", "and").replace("|", "or"))
print(result)