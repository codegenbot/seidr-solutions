from itertools import izip_longest


def paired_digits(s):
    total = 0
    for i, j in izip_longest(s, s[::-1]):
        if i == j and (i != "0" or j != "0"):
            total += int(i)
    return total