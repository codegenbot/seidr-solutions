def paired_digits(s):
    s = str(int(s.lstrip("0")))
    return sum(int(d) for i, d in enumerate(s) if i > 0 and d == s[i - 1])


print(paired_digits("0011111"))
print(paired_digits("99"))
print(paired_digits("88"))
print(paired_digits("77"))
print(paired_digits("55"))
print(paired_digits("44"))