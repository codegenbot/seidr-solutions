def paired_digits(s):
    s = str(s)
    total = 0
    i = 0
    while i < len(s) - 1:
        if s[i] != s[i+1]:
            if s[i] == s[i+1]: 
                total += int(s[i])
            i += 1
        else:
            i += 2
    return total