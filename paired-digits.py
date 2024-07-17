from itertools import pairwise

def paired_digits(s):
    return sum(int(digit1) for (digit1, digit2) in pairwise(s) if digit1 == digit2)