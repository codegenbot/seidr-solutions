def paired_digits(s):
    result = 0
    for i in range(len(s)-1):
        if s[i] == s[i+1]:
            result += int(s[i])
    return result