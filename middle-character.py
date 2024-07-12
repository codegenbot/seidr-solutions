s = input()
n = len(s)
if n % 2 == 0:
    print(s[n // 2 - 1 : n // 2 + 1])
else:
    print(s[n // 2])