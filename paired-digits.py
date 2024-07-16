```
def paired_digits(s):
    return sum(int(x) for x, y in zip(s, s[1:]) if x == y)