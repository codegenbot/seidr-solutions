def paired_digits(s):
    s = str(s)
    total = 0
    prev_prev = None
    prev = None
    for c in s:
        if c == '0' and prev == c:
            pass
        elif (c == prev_prev and c == prev) and c != '0':
            total += int(c)
        prev_prev, prev = prev, c
    return total