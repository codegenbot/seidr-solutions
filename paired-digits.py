def paired_digits(digits):
    return sum(
        int(digit)
        for digit in digits
        if digit * 2 == int(digits[i + 1])
        for i in range(len(digits) - 1)
    )