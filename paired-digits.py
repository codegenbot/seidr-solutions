```
def paired_digits(s):
    res = 0
    i = 0
    while i < len(s) - 1:
        if s[i] == s[i+1]:
            res += int(s[i]) // 2
        i += 1
    return res

print(paired_digits("0011111"))  
print(paired_digits("99"))
print(paired_digits("88"))
print(paired_digits("77"))
print(paired_digits("55"))
print(paired_digits("44"))