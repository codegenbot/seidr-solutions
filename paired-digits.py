Here is the solution:

def paired_digits(digits):
    return sum(int(digit) for digit in digits if digit == next_digits)
next_digits = ''
for digit in digits:
    next_digits += digit
    yield int(digit) if digit == next_digits else None
result = list(paired_digits('99'))