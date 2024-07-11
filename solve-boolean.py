expression = input()
result = eval(expression.replace("T", "True").replace("F", "False"), {"True": True, "False": False})
print(result)