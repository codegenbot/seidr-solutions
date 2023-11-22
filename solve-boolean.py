expression = input()
expression = expression.replace('T', 'True').replace('F', 'False').replace('|', 'or').replace('&', 'and')
result = eval(expression)
print(result)