expression = input().replace("&", "and").replace("|", "or").replace("T", "True").replace("F", "False")
result = eval(expression)
print(result)