```
def paired_digits(s):
    total = 0
    for i, d in enumerate(s):
        for j in range(i+1, len(s)):
            if s[j] == d:
                total += int(d)
                break
    return total