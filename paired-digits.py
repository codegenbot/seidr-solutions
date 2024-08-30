def paired_digits(digit_str):
    return sum(
        int(digit)
        for digit in digit_str
        if digit_str.index(digit) + 1 < len(digit_str)
        and digit == digit_str[digit_str.index(digit) + 1]
    )