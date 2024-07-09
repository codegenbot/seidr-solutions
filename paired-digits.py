```
def paired_digits(s):
    return sum(int(d) for d1, d2 in zip(s, s[1:]) if d1 == d2)

print(paired_digits("99"))
print(paired_digits("88"))
print(paired_digits("77"))
print(paired_digits("55"))
print(paired_digits("44"))