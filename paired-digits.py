def sum_paired_digits(s):
    return sum(int(c) for c in s if s.find(c) + 1 < len(s) and s[s.find(c) + 1] == c)