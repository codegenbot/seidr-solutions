
exp = input()
print(eval(exp.replace("T", "True").replace("F", "False").replace("|", "or").replace("&", "and")))