def paired_digits(digits):
    return sum(
        int(digit)
        for i, digit in enumerate(digits)
        if i < len(digits) - 1 and digit == digits[i + 1]
    )