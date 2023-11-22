expression = input()
expression = expression.replace('T', 'True').replace('F', 'False').replace('t', 'True').replace('f', 'False')
result = eval(expression)
print(result)