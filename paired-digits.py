def paired_digits(digit_string):
    total = 0
    for i in range(len(digit_string) - 1):
        if digit_string[i] == digit_string[i + 1]:
            total += int(digit_string[i])
    return total