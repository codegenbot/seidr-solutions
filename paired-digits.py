python
def paired_digits(s):
    return sum(int(x) for x in s if s.index(x)*2 < len(s) and s[s.index(x)+1] == x)