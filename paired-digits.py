def paired_digits(digits):
    return sum(int(a) for i, (a, b) in enumerate(zip(digits, digits[1:])) if a == b)