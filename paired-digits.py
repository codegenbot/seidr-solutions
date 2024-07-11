def paired_digits(digits):
    total = sum(int(digit) for i, digit in enumerate(digits) if str(digit) == str(digits[i + 1]) and i < len(digits) - 1)
    return str(total)