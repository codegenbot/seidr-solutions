def paired_digits(digits):
    return sum(
        int(d) for d in digits if d == next(d for d in digits[1:] if d == digits[0])
    )