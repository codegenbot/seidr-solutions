def paired_digits(s):
    total_sum = 0
    for i, (d1, d2) in enumerate(zip(s, s[1:])):
        if i % 2 == 0 and d1 == d2 or i == len(s) - 1:
            total_sum += int(d1)
    return total_sum