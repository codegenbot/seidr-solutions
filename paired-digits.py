```
def paired_digits(s):
    total = 0
    for i in range(len(s) - 1):
        if s[i] == s[i+1]:
            total += int(s[i]) * 2
    if s[-1] in [str(int(i)) for i in range(10)]:
        total += int(s[-1]) * 2
    return total