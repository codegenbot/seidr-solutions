def paired_digits(s):
    s = s.lstrip('0')
    total = 0
    for i in range(len(s)-1):
        if s[i] == s[i+1]:
            total += int(s[i])
    return total