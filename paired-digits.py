```
def paired_digits(s):
    s = s.lstrip('0') or '0'  
    total = 0
    prev = ''
    for d in s:
        if d == prev:
            total += int(d)
        prev = d
    return total

print(paired_digits("99")) 
print(paired_digits("88"))
print(paired_digits("77"))
print(paired_digits("55"))
print(paired_digits("44"))