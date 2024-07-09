def paired_digits(s):
    s = str(int(s))  
    total = 0
    for i in range(len(s) - 1):
        if s[i] == s[i+1]:
            total += int(s[i]) * 2
    return total