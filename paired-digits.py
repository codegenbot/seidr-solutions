def paired_digits(s):
    total = 0
    prev = s[0]
    for d in s:
        if d == prev:
            total += int(d)
        prev = d
    return total