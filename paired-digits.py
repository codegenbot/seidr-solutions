def paired_digits(digits):
    return sum(
        int(digit)
        for digit in digits
        if digits.index(digit) + 1 < len(digits)
        and digit == digits[digits.index(digit) + 1]
    )