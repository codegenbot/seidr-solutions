import ast
expression = input().replace('T', 'True').replace('F', 'False')
result = ast.literal_eval(expression)
print(result)