```
def paired_digits(s):
    total = 0
    for i in range(len(s)):
        if ((i == len(s) - 1 and s[i] == s[0]) or 
            (s[i] == s[i+1])):
            total += int(s[i])
    return total