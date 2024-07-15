def paired_digits(s):
    return sum(int(d1) for d1, d2 in zip(list(s), list(s)[1:]) if d1 == d2)