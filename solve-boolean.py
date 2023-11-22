expression = input()
expression = expression.replace('T', 'True').replace('F', 'False').lower()
result = eval(expression)
print(result)