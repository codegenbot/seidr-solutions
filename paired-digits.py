def paired_digits(digits):
    return sum(int(d) for d in digits if str(int(d)) + str(int(d)) in digits)