def paired_digits(digits):
    total_sum = 0
    for i in range(len(digits) - 1):
        if digits[i] == digits[i + 1]:
            total_sum += int(digits[i])
    return total_sum