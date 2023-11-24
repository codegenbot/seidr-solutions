s = input().strip()
length = len(s)
if length % 2 == 1:
    print(s[length // 2])
else:
    print(s[length // 2 - 1: length // 2 + 1])