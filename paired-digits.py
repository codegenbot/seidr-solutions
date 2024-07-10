```
def paired_digits(digits):
    total = 0
    for i in range(len(digits) - 1):
        if digits[i] == digits[i + 1]:
            total += int(digits[i])
    if len(digits) > 0 and len(digits) % 2 == 1:
        total += int(digits[-1])
    return total