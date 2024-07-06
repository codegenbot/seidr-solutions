def paired_digits(s):
    total = 0
    for i, j in zip(s, s[1:]):
        if i == j:
            total += int(i)
    return total