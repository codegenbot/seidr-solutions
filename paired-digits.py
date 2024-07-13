def paired_digits(s):
    total = 0
    for i in range(len(s) - 1):
        total += int(s[i]) * (s[i] == s[i+1] + 1)
    return total