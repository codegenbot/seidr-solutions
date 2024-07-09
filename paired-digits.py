```
def paired_digits(s):
    s = str(int(s.lstrip('0'))).replace('00', '')  
    total = 0
    for i in range(len(s)-1):
        if s[i] == s[i+1]:
            total += int(s[i])
    return total