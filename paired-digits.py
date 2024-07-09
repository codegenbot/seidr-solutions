```
def paired_digits(s):
    total = 0
    prev_digit = None
    for d in s:
        if prev_digit == d:
            total += int(d)
        prev_digit = d
    return total

print(paired_digits("0011111"))  
print(paired_digits("99")) 
print(paired_digits("88"))
print(paired_digits("77"))
print(paired_digits("55"))
print(paired_digits("44"))