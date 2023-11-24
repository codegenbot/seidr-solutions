def paired_digits(digits):
    return sum(int(a) for a, b in zip(digits[:-1], digits[1:]) if a == b or a == digits[0])