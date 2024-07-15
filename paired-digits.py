def paired_digits(s):
    total = 0
    prev_digit = None
    for d in s:
        if d == str(prev_digit):
            total += int(d)
        prev_digit = d
    return total