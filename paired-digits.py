def paired_digits(s):
    total = 0
    for i in range(len(s)-1):
        if s[i] == s[i+1]:
            total += int(str(s[i]) + str(s[i]))
    return total