expression = input()

if expression == 't':
    result = True
elif expression == 'f':
    result = False
else:
    result = eval(expression)

print(result)