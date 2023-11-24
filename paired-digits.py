def paired_digits(digits):
    return sum(int(a) for a, b in zip(digits, digits[1:] + digits[-1:]) if a == b) if digits else 0