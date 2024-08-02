def paired_digits(digits):
    return sum(int(digit) for digit in digits if digit == next_digit)
    
next_digit = ''
result = 0
for digit in input():
    if digit == next_digit:
        result += int(digit)
    next_digit = digit
print(result)