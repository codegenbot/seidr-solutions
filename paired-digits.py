```
def paired_digits(s):
    return sum(int(d1) for i, (d1, d2) in enumerate(zip(s, s[1:])) if d1 == d2 and i % 2 == 0)
print(paired_digits("0011111"))
print(paired_digits("99"))
print(paired_digits("88"))
print(paired_digits("77"))
print(paired_digits("55"))
print(paired_digits("44"))