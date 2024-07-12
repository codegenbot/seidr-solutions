exp = input().replace("T", " True").replace("F", " False").replace("|", " or").replace("&", " and")
print(eval(exp))