def paired_digits(s):
    total = 0
    for i in range(len(s) - 1):
        prev_digit = s[i]
        next_digit = s[i+1]
        if prev_digit == next_digit:
            total += int(prev_digit) * 2
    return total