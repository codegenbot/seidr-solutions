def paired_digits(digit_str):
    return sum(
        int(digit)
        for digit in digit_str
        if digit == digit_str[digit_str.index(digit) + 1]
    )