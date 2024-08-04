def paired_digits(input_str):
    total_sum = 0
    for i in range(len(input_str)-1):
        if input_str[i] == input_str[i+1]:
            total_sum += int(input_str[i])
    return str(total_sum)