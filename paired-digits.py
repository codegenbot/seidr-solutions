```
def paired_digits(s):
    s = ''.join(filter(str.isdigit, s))
    return sum(int(c1) for c1, c2 in zip(s, s[1:]) if c1 == c2)