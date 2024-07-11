def paired_digits(digits):
    return sum(int(digit) for digit in digits if digit == next_digits[0])


next_digits = input()
print(paired_digits(next_digits))