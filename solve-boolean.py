expression = input()
result = True if "t" in expression else False
if "&" in expression:
    result = all([True if x == "t" else False for x in expression.split("&")])
print(result)