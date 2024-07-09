def paired_digits(s):
    s = s.zfill(len(s) * 2)
    return sum(int(d1) for i, d1 in enumerate(s) if i % 2 == 0 and d1 == s[i+1])

print(paired_digits("0011111")) 
print(paired_digits("99")) 
print(paired_digits("88"))
print(paired_digits("77"))
print(paired_digits("55"))
print(paired_digits("44"))