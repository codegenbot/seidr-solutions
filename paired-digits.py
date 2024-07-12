def paired_digits(s):
    return sum(
        int(d)
        for d in s
        if s[int(s.index(d)) + 1 :] and s[int(s.index(d)) + 1 :].startswith(d)
    )