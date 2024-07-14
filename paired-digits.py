def paired_digits(s):
    s = s.lstrip('0')
    return sum(int(d) for i, d in enumerate(s) if i > 0 and (d == s[i - 1] or (s[i - 1] == "0" and d == "0")))