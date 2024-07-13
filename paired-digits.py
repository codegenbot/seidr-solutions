```
def paired_digits(s):
    total = 0
    for i in range(len(s) - 1):
        count = 1
        while i + 1 < len(s) and s[i] == s[i+1]:
            i += 1
            count += 1
        if count > 1: 
            total += int(s[i]) * count