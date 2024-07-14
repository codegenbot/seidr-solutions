def paired_digits(s):
    return sum(
        int(d)
        for i, d in enumerate(s)
        if i > 0
        and (d == s[i - 1] or (s[i - 1] == "0" and d == "0"))
        else continue
        or ((i > 0) and (s[0] == d) and (d == "0"))
    )