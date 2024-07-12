expression = input()
result = eval(expression, {"T": True, "F": False, "|": "or", "&": "and"})
print(result)