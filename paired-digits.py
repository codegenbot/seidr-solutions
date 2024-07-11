def paired_digits(digits):
    total = 0
    for i in range(len(digits)):
        for j in range(i + 1, len(digits)):
            if digits[i] == digits[j]:
                total += int(digits[i])
    return str(total)