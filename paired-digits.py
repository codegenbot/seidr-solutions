def paired_digits(digits):
    if not digits:
        return 0
    return sum(int(a) for a, b in zip(digits, digits[1:] + [digits[0]]) if a == b and a.isdigit())