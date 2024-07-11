def paired_digits(s):
    total_sum = 0
    for i in range(len(s) - 1):
        if s[i] == s[i + 1]:
            total_sum += int(s[i])
    if len(s) % 2 != 0 and s[-1] == s[-2]:
        total_sum += int(s[-1])
    return total_sum