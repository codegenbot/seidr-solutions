def paired_digits(digits):
    return sum(
        int(digit)
        for digit in digits
        if digit == next(iter((d2 for d1, d2 in zip(digits, digits[1:]) if d1 == d2)))
    )