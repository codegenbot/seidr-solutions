def paired_digits(digits):
    return sum(
        int(digit)
        for digit in digits
        if digits[digits.index(digit)] * 10 + int(digit) == int(digits[0] + digit)
    )