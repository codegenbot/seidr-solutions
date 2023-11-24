def paired_digits(digits):
    return sum(int(a) for a, b in zip(digits, digits + digits) if a == b)