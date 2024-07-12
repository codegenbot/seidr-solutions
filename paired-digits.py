def paired_digits(s):
    return sum(int(x) for x in s if x == next(s)[0])