def paired_digits(s):
    total = 0
    for i in range(len(s) - 1):
        if s[i] == s[i + 1] and s[i] == s[i - 1]:
            total += int(s[i])
    if s[len(s) - 1] == s[0]:
        total += int(s[0])
    return str(total)