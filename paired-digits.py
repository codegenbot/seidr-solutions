def paired_digits(digit_str):
    return sum(
        int(digit)
        for i, digit in enumerate(digit_str)
        if i < len(digit_str) - 1 and digit == digit_str[i + 1]
    )