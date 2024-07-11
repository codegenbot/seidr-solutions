def paired_digits(digits):
    return sum(
        int(digit)
        for i, digit in enumerate(str(digits))
        if i % 2 == 0 and digit == str(int(digits))[i + 1]
    )