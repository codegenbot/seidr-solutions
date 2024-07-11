expression = input()
result = (
    True if eval(expression.replace("T", "'True'").replace("F", "'False'")) else False
)
print(result)