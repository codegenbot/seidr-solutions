def paired_digits(s):
    total = 0
    for i in range(len(s) - 2):
        if s[i : i + 2] == s[i + 2 : i + 4]:
            total += int(s[i + 1])
    return total