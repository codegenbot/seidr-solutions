def paired_digits(s):
    total_sum = 0
    for i in range(len(s) - 1):
        if s[i] == s[i+1]:
            total_sum += int(s[i]) * 2
    return total_sum