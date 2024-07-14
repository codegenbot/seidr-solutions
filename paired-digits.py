def paired_digits(s):
    total_sum = 0
    prev_prev_digit = None
    prev_digit = None
    for digit in s:
        if digit == prev_digit:
            total_sum += int(digit)
        prev_prev_digit, prev_digit = prev_digit, digit
    return total_sum