```
def paired_digits(s):
    return sum(int(d) for i, d in enumerate(s) if i < len(s) - 1 and d == s[i+1])

print(paired_digits('99'))  
print(paired_digits('88'))  
print(paired_digits('77'))  
print(paired_digits('55'))  
print(paired_digits('44'))