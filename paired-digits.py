def paired_digits(digits):
    return sum(int(d) for d in digits if d == next(c for c in digits[1:] if c == d))