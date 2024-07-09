def paired_digits(s):
    return sum(int(a) for a, b in zip([s[0]] + s, s) if a == b)