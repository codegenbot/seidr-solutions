def paired_digits(s):
    total = 0
    for i in range(len(s)):
        if i < len(s) - 1:
            if s[i] == s[i+1]:
                total += int(s[i])
        elif s[0] == s[-1]:
            total += int(s[0])
    return total