def paired_digits(s):
    total = 0
    for i in range(len(s) - 1):
        prev_digit = int(s[i])
        next_digit = int(s[i+1])
        if prev_digit == next_digit:
            total += prev_digit + next_digit
    return total