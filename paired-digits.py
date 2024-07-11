def paired_digits(digits):
    total = sum(int(digit1) for digit1, digit2 in zip(digits, digits[1:]) if str(digit1) == str(digit2))
    return str(total)