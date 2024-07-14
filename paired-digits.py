def paired_digits(s):
    total_sum = 0
    for i, c in enumerate(s):
        if i > 0 and c == s[i - 1]:
            total_sum += int(c) * 2
        else:
            prev_digit = c
    return total_sum