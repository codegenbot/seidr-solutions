def paired_digits(digits):
    return sum(int(d) for d in digits if digits[i + 1] == d)