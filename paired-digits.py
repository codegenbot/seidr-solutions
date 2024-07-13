def paired_digits(s):
    total = 0
    i = 0
    while i < len(s) - 1:
        if s[i] == s[i+1]:
            total += int(s[i]) * 2
        i += 1
    if i < len(s):
        if s[i] == s[i]:
            total += int(s[i])
    return total