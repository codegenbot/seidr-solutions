def paired_digits(digits):
    if not digits:
        return 0
    return sum(int(a) for a, b in zip(digits, digits[1:] + digits[:1]) if a == b)