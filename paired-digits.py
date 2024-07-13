```
def paired_digits(s):
    return sum(int(x) for i, x in enumerate(s) if (i > 0 and s[i-1] == x))