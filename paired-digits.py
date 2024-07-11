```python
def paired_digits(s):
    total = 0
    for i in range(len(s)):
        if i == 0:  
            if s[i] == s[i+1]:
                total += int(s[i])
        elif i == len(s)-1:  
            if s[i] == s[0]:
                total += int(s[i])
        elif s[i] == s[i+1]:  
            total += int(s[i])
    return total