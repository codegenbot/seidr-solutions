expression = input()
result = eval(
    expression.replace("&", "and")
    .replace("|", "or")
    .replace("T", "True")
    .replace("F", "False")
)
print(result)