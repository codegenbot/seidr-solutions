def paired_digits(s):
    total_sum = 0
    prev_digit = None
    for digit in s:
        if digit == str(prev_digit) or prev_digit is None:  
            total_sum += int(digit)
        prev_digit = digit
    return total_sum