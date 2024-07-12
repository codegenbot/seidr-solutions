expression = expression.replace("|", " or ").replace("&", " and ")
result = eval(expression.replace("t", "True").replace("f", "False"))
print(result)