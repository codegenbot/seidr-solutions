```
def paired_digits(s):
    return sum(int(a) * 2 for a in s if s[s.index(a)+1:].count(a)>0)