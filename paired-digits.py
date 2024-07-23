def paired_digits(digits):
    return sum(int(d) for d in str(digits) if str(digits)[str(digits).index(d)+1] == d)