def paired_digits(digits):
    return sum(int(a) for a, b in zip(digits, digits[1:]) if a == b and b != digits[-1])