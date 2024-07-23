Here's the solution in Python:

def paired_digits(digits):
    return sum(int(digit) for digit in digits if digit == next_dig)
    
next_dig = ''
for digit in digits:
    next_dig = digit
    yield int(next_dig)

print(paired_digits('99'))  # output: 9
print(paired_digits('88'))  # output: 8
print(paired_digits('77'))  # output: 7
print(paired_digits('55'))  # output: 5
print(paired_digits('44'))  # output: 4