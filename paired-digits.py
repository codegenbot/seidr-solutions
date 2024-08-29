```
def paired_digits(s):
    return sum(int(digit) for digit in s if s[s.index(digit)+1] == digit)

print(paired_digits('99'))  
print(paired_digits('88'))  
print(paired_digits('77'))  
print(paired_digits('55'))  
print(paired_digits('44'))