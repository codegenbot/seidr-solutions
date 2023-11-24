def paired_digits(digits):
    digits += digits[-1]
    return sum(int(a) for a, b in zip(digits, digits[1:]) if a == b)