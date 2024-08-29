def paired_digits(digits):
    total = 0
    for i in range(len(digits) - 1):
        if digits[i] == digits[i + 1]:
            total += int(digits[i])
    if digits[-1] in [str(x) for x in range(10)]:
        total += int(digits[-1])
    return str(total)