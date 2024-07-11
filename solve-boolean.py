expression = input()

if expression == "t":
    print(True)
elif expression == "f":
    print(False)
else:
    operands = expression.split("&")
    result = any(all(operand == "t" for operand in sub_operands) for sub_operands in [operands.split("|")])
    print(result)