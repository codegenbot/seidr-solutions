def paired_digits(s):
    return sum(
        int(d)
        for i, d in enumerate(s)
        if d == s[i] and (i < len(s) - 1 and s[i] == s[i + 1]) or (i > 0 and s[i-1] == s[i])
    )