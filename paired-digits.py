def paired_digits(s):
    return sum(int(x) for x in s if any(c == x for c in s[s.index(x)+1:]))