Here is the Python solution for the problem:

def paired_digits(s):
    return sum(int(digit) for digit in s if s.index(digit)*2 < len(s) and s[s.index(digit)+1] == digit)

# test cases
print(paired_digits('99')) 
print(paired_digits('88')) 
print(paired_digits('77')) 
print(paired_digits('55')) 
print(paired_digits('44'))