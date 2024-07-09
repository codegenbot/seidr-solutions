def paired_digits(s):
    return sum(int(a) for a, b in zip(s, s[1:] + [s[-1]])) if len(s) > 0 else 0