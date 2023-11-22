expression = input().replace('T', 'True').replace('F', 'False').replace('True', 'True').replace('False', 'False')

result = eval(expression)

print(result)