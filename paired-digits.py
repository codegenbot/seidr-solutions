def paired_digits(digits):
    return sum(int(d) for d in digits if digits[digits.index(d) + 1] == d)