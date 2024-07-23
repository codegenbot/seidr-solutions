expression = input()

if expression == "t":
    print(True)
elif expression == "f":
    print(False)
else:
    operands = expression.split("&")
    result = all([operand == "t" for operand in operands])
    print(result)