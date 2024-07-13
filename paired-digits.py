def paired_digits(s):
    total = 0
    for i in range(len(s)-1):  
        if s[i].isdigit() == s[i+1].isdigit() and (s[i]%2 == 0) == (s[i+1]%2 == 0):
            total += int(s[i]) * 2
    return total