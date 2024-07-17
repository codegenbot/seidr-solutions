def paired_digits(s):
    sum = 0
    for i in range(len(s) - 1):
        if s[i] == s[i+1]:
            sum += int(s[i])
    return sum