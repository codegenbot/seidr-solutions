```
def paired_digits(s):
    return sum(int(d1 + d2) for d1, d2 in zip(s, s[1:]) if int(d1) == int(d2))

print(paired_digits("0011111"))  
print(paired_digits("99"))
print(paired_digits("88"))
print(paired_digits("77"))
print(paired_digits("55"))
print(paired_digits("44"))