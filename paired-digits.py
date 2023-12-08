def paired_digits(digits):
    return sum(int(a) for a, b in zip(digits, digits[1:] + digits[0]) if a == b)