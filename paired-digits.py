def paired_digits(s):
    return sum(
        int(d)
        for i, d in enumerate(s)
        if s.count(d) > 1 and i % len(str(s)) == int(str(s).index(d))
    )