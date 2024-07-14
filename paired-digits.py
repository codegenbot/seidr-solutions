def paired_digits(s):
    total = 0
    prev_digit = None
    for digit in s:
        if digit == prev_digit:
            total += int(digit) * 2
        else:
            prev_digit = None
        prev_digit = digit
    return total