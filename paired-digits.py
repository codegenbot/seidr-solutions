from itertools import pairwise

def paired_digits(s):
    return sum(int(a) for a, b in pairwise([*s, '']))