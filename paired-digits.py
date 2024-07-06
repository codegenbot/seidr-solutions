def paired_digits(s):
    total = 0
    for i in range(len(s) - 1):
        if s[i] == s[i + 1] and s[i + 1] == s[i + 2]:
            total += int(s[i])
        elif s[i] == s[i - 1] and s[i - 1] == s[i - 2]:
            total += int(s[i])
    return total