def paired_digits(s):
    return sum(int(d) * 2 for d in s if s.index(d) < len(s) - 1 and s[s.index(d) + 1] == d)