def paired_digits(s):
    total_sum = 0
    prev_digit = None
    for c in s:
        if c == prev_digit:
            total_sum += int(c) * 2
        prev_digit = c
    return total_sum