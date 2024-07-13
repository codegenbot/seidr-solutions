```
def paired_digits(s):
    s = str(s)
    return sum(
        int(digit) for i in range(len(s) - 1) if s[i] == s[i + 1]
    )