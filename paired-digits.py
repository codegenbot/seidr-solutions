def paired_digits(digits):
    return sum(
        int(digit)
        for digit in str(digits)
        if str(digits)[str(digits).index(digit) + 1] == digit
    )