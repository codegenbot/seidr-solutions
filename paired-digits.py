def paired_digits(s):
    total = 0
    prev_digit = None
    for digit in s:
        if digit == prev_digit:
            total += int(digit)
        prev_digit = digit
    return total