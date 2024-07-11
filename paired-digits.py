def paired_digits(s):
    return sum(int(c) for c in s if c == s[s.index(c) + 1])