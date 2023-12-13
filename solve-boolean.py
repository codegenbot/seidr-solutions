expression = input()
result = all(substr == 'T' for substr in expression.split('&'))
result = result or any(substr == 'T' for substr in expression.split('|'))
print(result)