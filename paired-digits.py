from itertools import groupby

def paired_digits(s):
    return sum(int(digit) * len(list(g)) for _, g in groupby(s))