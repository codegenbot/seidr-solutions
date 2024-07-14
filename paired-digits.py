def paired_digits(s):
    total_sum = 0
    i = 0
    while i < len(s) - 1:
        if s[i] == s[i+1]:
            total_sum += int(s[i]) * 2
        i += 1
    return total_sum