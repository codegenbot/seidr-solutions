def paired_digits(digits):
    digits_sum = 0
    previous_digit = ''
    for current_digit in digits:
        if current_digit == previous_digit:
            digits_sum += int(current_digit)
        previous_digit = current_digit
    return digits_sum