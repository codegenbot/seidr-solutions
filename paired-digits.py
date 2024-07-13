def paired_digits(digits):
    return sum(
        int(digit)
        for i, digit in enumerate(digits)
        if digit == digits[i + 1] or i == len(digits) - 1
    )