def paired_digits(s):
    total = 0
    for i in range(len(s) - 1):
        if s[i] == s[i+1] or (i == len(s) - 2 and s[0] == s[-1]):
            total += int(s[i]) * 2
        else:
            total += int(s[i])
    return total