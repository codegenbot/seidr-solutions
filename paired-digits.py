def paired_digits(s):
    return sum(int(x) for x in s if s.index(x) < len(s) - 1 and x == s[s.index(x) + 1])