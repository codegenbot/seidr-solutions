def paired_digits(s):
    return sum(int(d) for d in s if s[i+1] == d for i in range(len(s)-1))

print(paired_digits("99")) 
print(paired_digits("88"))
print(paired_digits("77"))
print(paired_digits("55"))
print(paired_digits("44"))