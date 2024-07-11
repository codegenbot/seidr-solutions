def paired_digits(digits):
    total = 0
    for i in range(len(digits)):
        if i < len(digits) - 1 and str(digits[i]) == str(digits[i+1]):
            total += int(str(digits[i])) * 2
        elif i == len(digits) - 1:
            if str(digits[i-1]) == str(digits[i]):
                total += int(str(digits[i]))
    return str(total)