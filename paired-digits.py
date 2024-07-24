import itertools
def paired_digits(s):
    return sum(int(d) for _, g in itertools.groupby(s) if len(list(g)) > 1)