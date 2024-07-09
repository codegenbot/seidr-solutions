def paired_digits(s):
    total = 0
    s = list(str(int(s)))
    for i in range(len(s)-1):
        if s[i] == s[i+1]:
            total += int(s[i])
    return total