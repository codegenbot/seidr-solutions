def paired_digits(s):
    total = 0
    for i in range(len(s) - 2):
        if s[i] == s[i + 1] and s[i + 1] == s[i + 2]:
            if s[i] != s[i + 1]:
                total += int(s[i + 2])
    return total