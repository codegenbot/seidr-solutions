```
def paired_digits(s):
    total = 0
    for i, c in enumerate(s):
        if i < len(s) - 1 and s[i] == s[i+1]:
            total += int(c)
    return total