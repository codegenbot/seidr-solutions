def paired_digits(digits):
    return sum(
        int(digit)
        for digit in digits
        if digit == next((n for n in digits[1:] if n == digit), None)
    )