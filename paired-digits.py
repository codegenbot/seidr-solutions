def paired_digits(s):
    return sum(int(x) for x in s if s[s.index(x)+1] == x)