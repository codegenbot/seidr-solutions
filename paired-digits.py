def paired_digits(s):
    total = 0
    for i in range(len(s)):
        if i < len(s) - 1 and s[i] == s[i+1]:
            total += int(s[i])
        elif i > 0 and s[0] == s[i]:
            total += int(s[0])
    return total