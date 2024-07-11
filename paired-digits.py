def paired_digits(digits):
    total = 0
    for i in range(len(digits)):
        if i == len(digits) - 1 or digits[i] == digits[i + 1]:
            total += int(digits[i])
    return str(total)