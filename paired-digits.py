def paired_digits(s: str):
    return sum(int(d) for i, d in enumerate(s) if i > 0 and d == s[i-1])