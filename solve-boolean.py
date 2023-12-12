expr = input().strip()
result = eval(expr, {'t': True, 'f': False})
print(result)