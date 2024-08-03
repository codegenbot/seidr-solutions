def paired_digits(s):
    return sum(int(c) for c in s if s.index(c) + 1 < len(s) and c == s[s.index(c) + 1])