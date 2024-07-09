def paired_digits(s):
    return sum(int(d) + int(d2) for i, d in enumerate(s) if i < len(s) - 1 and d == s[i+1] and (i == len(s) - 2 or d != s[i+1]))