def paired_digits(digits):
    total = 0
    i = 0
    while i < len(digits) - 1:
        if str(digits[i]) == str(digits[i+1]):
            total += int(str(digits[i])) * 2
            i += 1
        else:
            i += 1
    return str(total)