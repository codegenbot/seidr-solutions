s = input()
total = sum(int(s[i]) for i in range(len(s) - 1) if s[i] == s[i + 1])
print(total)