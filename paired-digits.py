def paired_digits(s):
    total = 0
    i = 0
    while i < len(s) - 1:
        if s[i] == s[i+1]:
            total += int(s[i])
            i += 2
        else:
            i += 1
    return total