def paired_digits(digits):
    return sum(
        int(digit)
        for digit in digits
        if int(digit) == int(digits[1 + list(digits).index(digit)])
    )