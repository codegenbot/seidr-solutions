def paired_digits(digits):
    return sum(int(digit) for digit in digits if digit == next(d for d in digits[1:] if d == digit))