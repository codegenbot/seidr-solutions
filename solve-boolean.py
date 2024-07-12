expression = input()
result = eval(
    expression.replace("T", "True")
    .replace("F", "False")
    .replace("|", "or")
    .replace("&", "and")
)
print(result)