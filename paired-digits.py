Here is a Python solution for the problem:

def paired_digits(s):
    return sum(int(d) for d in s if s[s.index(d)+1] == d)

print(paired_digits('99')) 
print(paired_digits('88')) 
print(paired_digits('77')) 
print(paired_digits('55')) 
print(paired_digits('44'))