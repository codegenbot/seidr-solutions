```
def paired_digits(s):
    return sum(int(c1)*2 for c1,c2 in zip(s,s[1:]) if c1==c2)