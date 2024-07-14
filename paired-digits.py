def paired_digits(s):
    return sum(int(d) * 2 for i, d in enumerate(s) if i < len(s) - 1 and d == s[i + 1])