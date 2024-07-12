expression = input()
result = eval(expression.replace("t", "T").replace("f", "F").replace("|", "or").replace("&", "and"))
print(result)