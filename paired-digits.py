Here is the Python code for the paired-digits problem:

def paired_digits(s):
    return sum(int(digit) for digit in s if s[s.index(digit)+1] == digit)

print(paired_digits('99'))  # Output: 9
print(paired_digits('88'))  # Output: 8
print(paired_digits('77'))  # Output: 7
print(paired_digits('55'))  # Output: 5
print(paired_digits('44'))  # Output: 4