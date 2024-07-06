def paired_digits(s):
    total = 0
    for i in range(len(s) - 1):
        if s[i] == s[i + 1] and int(s[i]) != 0:
            total += int(s[i])
    return total