```
def paired_digits(s):
    total = 0
    i = 0
    while i < len(s):
        if i != len(s) - 1 and s[i] == s[(i + 1) % len(s)]:
            total += int(s[i])
        i += 1
    return total