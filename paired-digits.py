def paired_digits(digits):
    return sum(int(d) for d in digits if d == digits[1])