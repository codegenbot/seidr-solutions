def paired_digits(s):
    total = 0
    for i in range(len(s) - 1):
        if s[i] == s[i+1]:
            total += int(s[i]) * 2
        else:
            total += int(s[i])
    return total + (int(s[-1]) if len(s) > 1 and s[0] == s[-1] else int(s[-1]))