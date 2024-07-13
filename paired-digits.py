```Python
def paired_digits(s):
    total = 0
    for i in range(len(s) - 1):
        if s[i] == s[i+1]:
            total += int(s[i]) * 2
        else:
            total += int(s[i])
    if s[-1] in s[:-1]:
        total += int(s[-1]) * 2
    return total