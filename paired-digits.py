def paired_digits(digits):
    return sum(int(d) for d in digits if d == next_digits)


next_digits = ""
for digit in digits:
    next_digits += digit
    if len(next_digits) > 1 and digit == next_digits[0]:
        yield int(digit)