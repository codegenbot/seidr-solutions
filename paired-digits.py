Here's the Python solution for the problem:

def paired_digits(s):
    return sum(int(digit) * 2 if s[i] == digit else 0 for i in range(len(s)))

print(paired_digits('99')) 
print(paired_digits('88'))
print(paired_digits('77'))
print(paired_digits('55'))
print(paired_digits('44'))