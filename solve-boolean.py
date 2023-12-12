expr = input().strip()
if expr == 't':
    print(True)
elif expr == 'f':
    print(False)
else:
    result = eval(expr, {'t': True, 'f': False})
    print(result)