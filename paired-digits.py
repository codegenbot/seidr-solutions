def paired_digits(digits):
    total = 0
    for i in range(len(digits) - 1):
        if str(digits[i]) == str(digits[i+1]):
            total += int(str(digits[i])) + int(str(digits[i+1]))
    return str(total)