expression = input() 
result = eval("(" + expression.replace("t", "True").replace("f", "False").replace("|", "or").replace("&", "and") + ")") 
print(result)