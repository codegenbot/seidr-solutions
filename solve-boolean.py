expr = input().strip()
if expr == 't':
    print(True)
elif expr == 'f':
    print(False)
else:
    print(eval(expr, {'t': True, 'f': False}))