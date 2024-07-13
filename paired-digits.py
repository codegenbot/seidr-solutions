def paired_digits(input_str):
    total = 0
    for i in range(len(input_str) - 1):
        if input_str[i] == input_str[i+1]:
            total += int(input_str[i])
    return str(total)