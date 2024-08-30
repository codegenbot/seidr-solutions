def paired_digits(digits):
    return sum(int(dig) for dig in digits if dig == next_dig)