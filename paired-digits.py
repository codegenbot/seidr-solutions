def paired_digits(digits):
    return sum(int(a) for a, b in zip(digits, digits[1:] + digits[-2:]) if a == b)