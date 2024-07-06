def paired_digits(s):
    total = 0
    for i in range(len(s) - 1):
        if s[i : i + 2] == s[i + 1 : i + 3]:
            total += int(s[i + 2])
    return total