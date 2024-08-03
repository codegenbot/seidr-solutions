def paired_digits(s):
    return sum(
        int(d)
        for d in s
        if s.index(str(int(d)) + 1) != -1 and str(int(d)) == s[s.index(str(int(d)) + 1)]
    )