def paired_digits(digits):
    return int(sum(int(a) for a, b in zip(digits, digits + digits[0]) if a == b)) if digits else 0