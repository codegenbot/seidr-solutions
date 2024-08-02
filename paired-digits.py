def paired_digits(s):
    return sum(int(d) for d in s if s.index(d) + 1 < len(s) and s[s.index(d) + 1] == d)