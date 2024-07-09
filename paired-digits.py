def paired_digits(s):
    total = 0
    prev_prev = None
    prev = None
    for c in s:
        if (c == prev or c == prev_prev) and c != '0':
            total += int(c)
        prev_prev, prev = prev, c
    return total