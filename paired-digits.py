Here is the Python code for the paired-digits problem:

def paired_digits(s):
    return sum(int(digit) for digit in s if digit * 2 in s)

print(paired_digits('99')) 
print(paired_digits('88'))
print(paired_digits('77'))
print(paired_digits('55'))
print(paired_digits('44'))