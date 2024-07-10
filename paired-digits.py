def paired_digits(digit_str):
    total = 0
    for i in range(len(digit_str) - 1):
        if digit_str[i] == digit_str[i + 1]:
            total += int(digit_str[i])
    return total