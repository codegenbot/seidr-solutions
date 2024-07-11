def paired_digits(digits):
    return sum(int(digit) for digit in digits if len(digits) > 1 and digit == digits[1])