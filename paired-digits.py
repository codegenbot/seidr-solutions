def paired_digits(digits):
    total = 0
    for i in range(len(digits)):
        if i > 0 and digits[i] == digits[i-1]:
            total += int(digits[i])
    return total