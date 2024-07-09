def paired_digits(s):
    return sum(int(d) + int(d2) for i, d in enumerate(s) if i < len(s) - 1 and d == s[i+1] and (i == len(s) - 2 or d != s[i+1]))
print(paired_digits("0011111"))
print(paired_digits("99")) 
print(paired_digits("88"))
print(paired_digits("77"))
print(paired_digits("55"))
print(paired_digits("44"))