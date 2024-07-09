def paired_digits(s):
    return sum(int(d1) for i, d1 in enumerate(s) for j, d2 in enumerate(s) if i < len(s) - 1 and int(d1) == int(d2))

print(paired_digits("0011111"))
print(paired_digits("99"))
print(paired_digits("88"))
print(paired_digits("77"))
print(paired_digits("55"))
print(paired_digits("44"))