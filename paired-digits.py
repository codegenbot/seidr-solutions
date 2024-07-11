def paired_digits(digits):
    total = 0
    current_digit = None
    count = 0

    for digit in digits:
        if str(digit) == str(current_digit):
            total += int(str(digit))
            count += 1
        else:
            current_digit = digit
            count = 1

    return str(total)