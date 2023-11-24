def paired_digits(digits):
    return sum(int(a+b) for a, b in zip(digits, digits[1:]) if a == b)