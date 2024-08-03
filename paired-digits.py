def paired_digits(s):
    return sum(
        int(d)
        for d in s
        if s.index(str(int(d))) < len(s) - 1 and s[s.index(str(int(d))) + 1] == d
    )