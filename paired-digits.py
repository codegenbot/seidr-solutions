
def sum_paired_digits(s):
    return sum(int(c) for c in s if s[s.index(c)-1] == c or s[s.index(c)+1] == c)