def paired_digits(s):
    total = 0
    if s[0] == s[-1]:
        total += int(s[-1]) * 2
    for i in range(len(s) - 1):
        if s[i] == s[i+1]:
            total += int(s[i]) * 2
        else:
            total += int(s[i])
    return total