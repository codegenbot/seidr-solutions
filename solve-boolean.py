expr = input().lower()
result = eval(expr.replace('t', 'True').replace('f', 'False'))
print(result)