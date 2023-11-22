expression = input()
expression = expression.replace('T', 'True').replace('F', 'False')
result = eval(expression)
print(result)