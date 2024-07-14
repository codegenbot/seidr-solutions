def paired_digits(s):
    return sum(int(d) for i, d in enumerate(s) if i > 0 and (d == s[i - 1] or (i < len(s) - 1 and d == s[i + 1])))