def paired_digits(digits):
    return sum(int(d) for d in set(d1) if str(d) * 2 in digits)