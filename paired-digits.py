def paired_digits(s):
    total_sum = 0
    for i in range(len(s)):
        if i > 0 and s[i] == s[i-1]:
            total_sum += int(s[i])
        elif i < len(s) - 1 and s[i] == s[i+1]:
            total_sum += int(s[i])
    return total_sum