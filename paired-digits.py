def paired_digits(s):
    s = str(int(s.lstrip('0'))).zfill(len(s))
    return sum(int(d) for d in s if d == s[s.index(d)+1])

print(paired_digits("0011111"))
print(paired_digits("99")) 
print(paired_digits("88"))
print(paddedigits("77"))
print(paired_digits("55"))
print(paired_digits("44"))