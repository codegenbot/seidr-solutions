def paired_digits(s):
    return sum(int(d) for d in s if d * 2 == int(s[s.index(d) + 1]))