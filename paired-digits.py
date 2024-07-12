def paired_digits(s):
    s = str(s)
    return sum(int(c) for c in s if c == s[s.index(c) + 1])