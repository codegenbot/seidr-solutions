```Python
def paired_digits(s):
    return sum(int(d) for j, d in enumerate(s) if s[j] == s[j+1] if j < len(s)-1)

print(paired_digits("99"))
print(paired_digits("88"))
print(paired_digits("77"))
print(paired_digits("55"))
print(paired_digits("44"))