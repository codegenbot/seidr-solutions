def paired_digits(s):
    total_sum = 0
    for a, b in zip(s + s, s):
        if a == b:
            total_sum += int(a)
    return total_sum