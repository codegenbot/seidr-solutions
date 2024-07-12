expression = input()
operators = {"T": "True", "F": "False", "|": " or ", "&": " and "}
result = eval(''.join(operators.get(c, c) for c in expression))
print(result)