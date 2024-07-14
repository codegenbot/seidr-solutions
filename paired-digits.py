def paired_digits(s):
    return sum(
        int(d)
        for i, d in enumerate(s)
        if (i < len(s) - 1 and d == s[i + 1] and d != '0') or (i == len(s) - 1 and int(d) != 0)
    )