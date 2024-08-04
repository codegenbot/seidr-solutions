expression = input()
print(eval(expression.replace("t", "True").replace("f", "False")))