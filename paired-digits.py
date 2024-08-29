def paired_digits(digits):
    return sum(int(d) for d in digits if digits[1:][int(d)] == int(d))