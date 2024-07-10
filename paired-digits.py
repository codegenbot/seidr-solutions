def paired_digits(digits):
    total = 0
    for i in range(len(digits) - 1):
        if digits[i] == digits[i + 1]:
            total += int(digits[i])
    return total


# Read input from user
digits = input()
result = paired_digits(digits)
print(result)