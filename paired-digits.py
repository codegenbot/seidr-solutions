def paired_digits(digits):
    return str(sum(int(a) for a, b in zip(digits[:-1], digits[1:]) if a == b))