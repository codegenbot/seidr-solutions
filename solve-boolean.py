expr = input().strip()
if expr == 't':
    print(True)
elif expr == 'f':
    print(False)
else:
    print(eval(expr))