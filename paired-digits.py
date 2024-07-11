```
def paired_digits(digits):
    total = 0
    prev_digit = None
    for i in range(len(digits)):
        if int(digits[i]) == prev_digit:
            total += int(digits[i])
        prev_digit = int(digits[i])
    return str(total)