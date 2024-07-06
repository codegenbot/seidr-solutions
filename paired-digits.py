def paired_digits(s):
    total = 0
    for i in range(len(s) - 1):
        if s[i] == s[i + 1] or (i > 0 and s[i - 1] == s[i]):
            total += int(s[i])
    return total