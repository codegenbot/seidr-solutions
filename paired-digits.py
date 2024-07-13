def paired_digits(s):
    total = 0
    for i in range(len(s)):
        if s[i] == s[(i+1)%len(s)]:  
            total += int(s[i]) * 2
        else:
            total += int(s[i])
    return total